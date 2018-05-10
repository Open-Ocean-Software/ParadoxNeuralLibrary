#ifndef INPUTNEURON_H
#define INPUTNEURON_H

#include "../Neuron.h"

namespace Paradox::Neural
{
    class InputNeuron : public Neuron
    {
    public:
        InputNeuron Initialize (double value);
        InputNeuron Initialize (double weights[], double value);

        InputNeuron SetConnections (Layer output);

    private:
        double value;
    };
}

#endif
