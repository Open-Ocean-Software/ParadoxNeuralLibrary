#include "Neuron.h"
#include "TransitionFunction.h"

using namespace Paradox::Neural;

Neuron::Neuron (unsigned int id) {
    this->id = id;
    this->error = 0;
    this->isInitialized = false;

    this->function = &TransitionFunction::Sigmoid;
    this->derivative = &TransitionFunction::SigmoidPrime;
}
Neuron::Neuron (const Neuron &clone) {
    this->id = clone.id;
    this->function = clone.function;
    this->derivative = clone.derivative;
    this->input = clone.input;
    this->output = clone.output;
    this->weights = clone.weights;
    this->error = clone.error;
    this->isInitialized = clone.isInitialized;
}

Neuron Neuron::Initialize () {

    this->isInitialized = true;
}
