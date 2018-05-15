#include <random>
#include "TransitionFunction.h"

using namespace Paradox::Neural;

double TransitionFunction::Sigmoid (double x) {
    return 1 / (1 + exp(-x));
}

double TransitionFunction::SigmoidPrime (double x) {
    double sigval = TransitionFunction::Sigmoid(x);
    return sigval * (1.0 - sigval);
}

double TransitionFunction::SigmoidWeightGeneration (unsigned int fanIn, unsigned int fanOut) {
    double rangeRadius = 4.0 * sqrt(6.0 / (double)(fanIn + fanOut));
    std::uniform_real_distribution<double> unif(-rangeRadius, rangeRadius);
    std::default_random_engine re;
    return unif(re);
}
