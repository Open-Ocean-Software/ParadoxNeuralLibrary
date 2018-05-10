#include "LossFunction.h"

using namespace Paradox::Neural;

static double LossFunction::Softmax (double val, double receptive[], int receptiveCount) {
    double denom = 0;
    for (int i = 0; i < receptiveCount; i++) {
        denom += exp(receptive[i]);
    }
    return exp(val) / denom;
}
