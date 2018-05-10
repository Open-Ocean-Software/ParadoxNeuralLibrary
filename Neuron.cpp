#include "Neuron.h"

using namespace Paradox::Neural;

Neuron::Neuron (uint id) {
    this->Id = id;
    this->Error = 0;
    this->isInitialized = false;
}
Neuron::Neuron (Neuron clone) {
    this->id = clone.id;
    this->*transitionFunction = clone.*transitionFunction;
    this->*transitionDerivative = clone.*transitionDerivative;
    this->input = clone.input;
    this->output = clone.output;
    this->weights = clone.weights;
    this->error = clone.error;
    this->isInitialized = clone.isInitialized;
}

Neuron::Initialize () {
    
    this->isInitialized = true;
}
