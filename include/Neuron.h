#ifndef NEURON_H
#define NEURON_H

#include "Layer.h"
#include "TransitionFunction.h"

namespace Paradox::Neural
{
    class Neuron
    {
    public:
        Neuron (unsigned int id);
        Neuron (const Neuron &clone);

        Neuron Initialize ();
        Neuron Initialize (double weights[]);

        Neuron SetTransitionFunction (double (*transitionFunction)(double), double (*transitionDerivative)(double));

        Neuron ForwardPropagate ();
        Neuron BackwardPropagate (double learningRate);

    private:
        unsigned int id;

        double (*function) (double);
        double (*derivative) (double);

        Layer input;
        Layer output;
        double *weights;

        double error;

        bool isInitialized;
    };
}

#endif
