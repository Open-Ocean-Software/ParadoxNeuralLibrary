#ifndef POOLINGNEURON_H
#define POOLINGNEURON_H

#include "../Neuron.h"
#include "Parameters/PoolingParameters.h"

namespace Paradox::Neural
{
    class PoolingNeuron : public Neuron
    {
    public:
        PoolingNeuron SetParameters (Poolingparameters params);

        PoolingNeuron SetConnections (Layer input, Layer output);

    private:
        PoolingParameters params;
    }
}

#endif
