#ifndef CONVNEURON_H
#define CONVNEURON_H

#import "ConvolutionalParameters.h"

namespace Paradox::Neural
{
    class ConvNeuron : public Neuron
    {
    public:
        ConvNeuron SetParameters(ConvolutionalParameters params);

    private:
        ConvolutionalParameters Params;
    };
}

#endif
