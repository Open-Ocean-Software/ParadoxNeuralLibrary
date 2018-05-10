#ifndef NEURON_H
#define NEURON_H

namespace Paradox::Neural
{
    class Neuron
    {
    public:
        Neuron (uint id);
        Neuron (Neuron clone);

        Neuron Initialize ();
        Neuron Initialize (double weights[]);

        Neuron SetTransitionFunction (double (*transitionFunction)(double), double (*transitionDerivative)(double));

        Neuron ForwardPropagate ();
        Neuron BackwardPropagate (double learningRate);

    private:
        uint id;

        double (*transitionFunction) (double);
        double (*transitionDerivative) (double);

        Layer input;
        Layer output;
        double weights[];

        double error;

        bool isInitialized;
    };
}

#endif
