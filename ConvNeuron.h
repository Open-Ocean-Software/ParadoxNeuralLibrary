#ifndef CONVNEURON_H
#define CONVNEURON_H

#import "Neuron.h"
#import "ConvolutionalParameters.h"

namespace Paradox::Neural
{
    class ConvNeuron : public Neuron
    {
    public:
        ConvNeuron SetParameters (ConvolutionalParameters params);

        ConvNeuron SetConnections (Neuron inputs[], Neuron outputs[]);

    private:
        ConvolutionalParameters params;
    };
}

#endif
