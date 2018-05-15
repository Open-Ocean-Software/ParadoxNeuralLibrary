#ifndef LAYER_H
#define LAYER_H

#include <vector>
#include "Neuron.h"

using namespace std;

namespace Paradox::Neural
{
    class Neuron;
    class Layer
    {
    public:

        //...
        //TODO: Add stuff here
        //...

        unsigned int Count ();

    private:
        vector<Neuron> neurons;

    };
}

#endif
