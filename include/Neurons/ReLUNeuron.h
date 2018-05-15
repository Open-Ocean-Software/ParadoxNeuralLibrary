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

        ReLUNeuron SetConnections (Layer input, Layer output);

    private:
        ReLUParameters params;
    };
}

#endif
