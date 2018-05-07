#include "TransitionFunction.h"

using namespace Paradox::Neural;

static int TransitionFunction::Sigmoid(double x) {
    return 1 / (1 + exp(-x));
}
