#ifndef POOLINGPARAMETERS_H
#define POOLINGPARAMETERS_H

namespace Paradox::Neural
{
    struct PoolingParameters
    {
        uint LayerIndex;
        uint ReceptiveLength;
        uint ReceptiveDepth;
    };
}

#endif
