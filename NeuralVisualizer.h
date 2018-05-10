#ifndef NEURALVISUALIZER_H
#define NEURALVISUALIZER_H

#import "OutputNeuron.h"

namespace Paradox::Neural
{
    template<typename T>
    class NeuralVisualizer
    {
    public:
        NeuralVisualizer ();
        NeuralVisualizer (NeuralVisualizer visualizer);

        NeuralVisualizer SetConnections (OutputNeuron outputs[]);

        virtual T Visualize ();
        virtual NeuralVisualizer Visualize (T* visual);

    private:
        OutputNeuron outputs[];

        double[] visualize ();
    };
}

#endif
