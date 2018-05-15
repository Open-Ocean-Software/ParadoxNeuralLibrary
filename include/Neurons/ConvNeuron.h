#ifndef CONVNEURON_H
#define CONVNEURON_H

#include "../Neuron.h"
#include "../Layer.h"
#include "Parameters/ConvolutionalParameters.h"

namespace Paradox::Neural
{
    class ConvNeuron : public Neuron
    {
    public:
        ConvNeuron SetParameters (ConvolutionalParameters params);

        ConvNeuron SetConnections (Layer input, Layer output);

    private:
        ConvolutionalParameters params;
    };
}

#endif
