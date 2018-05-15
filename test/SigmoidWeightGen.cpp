#include <iostream>
#include <string>
#include "TransitionFunction.h"

using namespace std;

int main ()
{
    cout << "Sigmoid Weight Generator Test:" << endl;
    for (int i = 0; i < 100; i++) {
        cout << ">> " << Paradox::Neural::TransitionFunction::SigmoidWeightGeneration(20, 20);
    }
}
