#ifndef FCNEURON_H
#define FCNEURON_H

#import "Neuron.h"

namespace Paradox::Neural
{
    class FCNeuron : public Neuron
    {
    public:
        FCNeuron SetConnections (Neuron inputs[], Neuron outputs[]);
    };
}

#endif
