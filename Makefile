###
###	PARADOX NEURAL LIBRARY - Makefile
###	Author: Nicholas Hein
###

#
#	CONSTANTS
#

PROJECTNAME := ParadoxNeuralLibrary
CC := g++
MAINNAME := main
SRCDIR := src
TESTDIR := test
BUILDDIR := build
BUILDTESTDIR := buildtest
BINDIR := bin
TARGET := $(BINDIR)/$(PROJECTNAME)

#
#	COMPILING/LINKING
#

SRCEXT := cpp
SOURCES := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
TESTSOURCES := $(shell find $(TESTDIR) -type f -name *.$(SRCEXT))
OBJECTS := $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
SAFEOBJECTS := $(patsubst $(BUILDDIR)/$(MAINNAME).o,, $(OBJECTS))
TESTOBJECTS := $(patsubst $(TESTDIR)/%,$(BUILDTESTDIR)/%,$(TESTSOURCES:.$(SRCEXT)=.o))
CFLAGS := -g
INC := -I include

$(TARGET): $(OBJECTS)
	@echo " Linking..."
	@echo "   $(CC) $^ -o $(TARGET) $(LIB)"; $(CC) $^ -o $(TARGET) $(LIB)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@echo " Building: '$@' from '$<'"
	@mkdir -p $(BUILDDIR)
	@echo "   $(CC) $(CFLAGS) $(INC) -c -o $@ $<"; $(CC) $(CFLAGS) $(INC) -c -o $@ $<

#
#	METHODS
#

# Targets
clean:
	@echo " Cleaning..."
	@echo "   $(RM) -r $(BUILDDIR)/* $(BINDIR)/* $(BUILDTESTDIR)/*"; $(RM) -r $(BUILDDIR)/* $(BINDIR)/* $(BUILDTESTDIR)/*


# Tests
define EACH_SOURCE
	$(eval obj = $(patsubst $(TESTDIR)/%,$(BUILDTESTDIR)/%,$(1:.$(SRCEXT)=.o)))
	echo " Building: '$(obj)' from '$(1)'...";
	echo "   $(CC) $(CFLAGS) $(INC) -c -o $(obj) $(1)"; $(CC) $(CFLAGS) $(INC) -c -o $(obj) $(1)
	echo " Linking..."
	$(eval progname = $(TARGET)_$(patsubst $(TESTDIR)/%,%,$(1:.$(SRCEXT)=)))
	@echo "   $(CC) $(obj) $(SAFEOBJECTS) -o $(progname) $(LIB)"; $(CC) $(obj) $(SAFEOBJECTS) -o $(progname) $(LIB)
endef

test:
	@echo " Compiling tests...";
	@mkdir -p $(BUILDTESTDIR)
	@$(foreach src,$(TESTSOURCES),$(call EACH_SOURCE,$(src)))



.PHONY: clean
.PHONY: test
