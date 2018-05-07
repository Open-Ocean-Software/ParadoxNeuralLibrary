//Neuron:
//  Id: uint
//  LayerIndex: uint
//  Axons: array():Neuron
//  Dendrites: array():Neuron
//  Weights: array():double
//  Error: double

//InputNeuron (inherits Neuron):
//  Input: array():double

//OutputNeuron (inherits Neuron):
//  Output: double
//  Target: double
//  LossFunction: double:Reference(double)

//ConvNeuron (inherits Neuron):
//  Stride: uint
//  Depth: uint
//  Padding: uint
//  InputLength: uint


//ReluNeuron (inherits Neuron)

//PoolingNeuron (inherits Neuron):
//
