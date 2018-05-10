#ifndef RELUNEURON_H
#define RELUNEURON_H

#include "../Neuron.h"
#include "Parameters/ReLUParameters.h"

namespace Paradox::Neural
{
    class ReLUNeuron : public Neuron
    {
    public:
        ReLUNeuron SetParameters (ReLUParameters params);

        ReLUNeuron SetConnections (Neuron inputs[], Neuron outputs[]);

    private:
        ReLUParameters params;
    };
}

#endif
