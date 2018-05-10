#include "TransitionFunction.h"

using namespace Paradox::Neural;

static double TransitionFunction::Sigmoid (double x) {
    return 1 / (1 + exp(-x));
}

static double TransitionFunction::SigmoidPrime (double x) {
    double sigval = TransitionFunction::Sigmoid(x);
    return sigval * (1.0 - sigval);
}
