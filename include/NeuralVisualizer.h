#ifndef NEURALVISUALIZER_H
#define NEURALVISUALIZER_H

#include "OutputNeuron.h"

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

        NeuralVisualizer SetLossFunction (double (*lossFunction) (double, double[]));

    private:
        OutputNeuron outputs[];

        double (*lossFunction) (double, double[]);
        double[] visualize ();
    };
}

#endif
