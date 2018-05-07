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
        
        bool Initialize ();
        bool Initialize (Neuron axons[], Neuron dendrites[]);
        bool Initialize (Neuron axons[], Neuron dendrites[], double weights[]);


        void SetTransitionFunction (double (*TransitionFunction)(double));

        Neuron ForwardPropagate ();
        Neuron BackwardPropagate (double learningRate);

    private:
        double (*TransitionFunction) (double);

        Neuron Axons[];
        Neuron Dendrites[];
        double Weights[];

        double Error;

        bool isInitialized;
    };
}

#endif
