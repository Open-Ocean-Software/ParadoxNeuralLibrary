#ifndef NEURALENCODER_H
#define NEURALENCODER_H

#include "InputNeuron.h"

namespace Paradox::Neural
{
    template<typename T>
    class NeuralEncoder
    {
    public:
        NeuralEncoder ();
        NeuralEncoder (NeuralEncoder encoder);

        NeuralEncoder SetConnections (InputNeuron inputs[]);

        virtual NeuralEncoder Encode (T data);

    private:
        InputNeuron inputs[];

        void encode (double data[]);
    };
}

#endif
