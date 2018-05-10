#ifndef OUTPUTNEURON_H
#define OUTPUTNEURON_H

#include "../Neuron.h"

namespace Paradox::Neural
{
    class OutputNeuron : public Neuron
    {
    public:
        OutputNeuron Initialize (double *value);
        OutputNeuron Initialize (double weights[], double *value);

        OutputNeuron SetConnections (Neuron inputs[]);

    private:
        double *value;
    };
}

#endif
