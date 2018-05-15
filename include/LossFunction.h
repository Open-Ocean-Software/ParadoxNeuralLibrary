#ifndef LOSSFUNCTION_H
#define LOSSFUNCTION_H

#include <math.h>

namespace Paradox::Neural
{
    class LossFunction
    {
    public:
        static double Softmax (double val, double receptive[], int receptiveCount);
    };
}

#endif
