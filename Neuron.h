#ifndef NEURON_H
#define NEURON_H

namespace Paradox::Neural
{
    class Neuron
    {
    public:
        Neuron (uint id);
        Neuron (Neuron clone);

        uint Id;

        Neuron Initialize ();
        Neuron Initialize (double weights[]);

        Neuron SetTransitionFunction (double (*TransitionFunction)(double), double (*TransitionDerivative)(double));

        Neuron ForwardPropagate ();
        Neuron BackwardPropagate (double learningRate);

    private:
        double (*TransitionFunction) (double);
        double (*TransitionDerivative) (double);

        Neuron Axons[];
        Neuron Dendrites[];
        double Weights[];

        double Error;

        bool isInitialized;
    };
}

#endif
