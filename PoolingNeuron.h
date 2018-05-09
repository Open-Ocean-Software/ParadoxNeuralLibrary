#ifndef POOLINGNEURON_H
#define POOLINGNEURON_H

#import "Neuron.h"
#import "PoolingParameters.h"

namespace Paradox::Neural
{
    class PoolingNeuron : public Neuron
    {
    public:
        PoolingNeuron SetParameters (Poolingparameters params);

        PoolingNeuron SetConnections (Neuron inputs[], Neuron outputs[]);

    private:
        PoolingParameters params;
    }
}

#endif
