#ifndef TRANSITIONFUNCTION_H
#define TRANSITIONFUNCTION_H

#include <math.h>

namespace Paradox::Neural
{
    class TransitionFunction
    {
    public:
        static double Sigmoid (double x);
        static double SigmoidPrime (double x);
        static double SigmoidWeightGeneration (unsigned int fanIn, unsigned int fanOut);
    };
}

#endif
