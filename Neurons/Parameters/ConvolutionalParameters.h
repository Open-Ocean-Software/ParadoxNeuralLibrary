#ifndef CONVOLUTIONALPARAMETERS_H
#define CONVOLUTIONALPARAMETERS_H

namespace Paradox::Neural
{
    struct ConvolutionalParameters
    {
        uint LayerIndex;
        uint ReceptiveLength;
        uint ReceptiveDepth;
        uint Stride;
        uint Padding;
    };
}

#endif
