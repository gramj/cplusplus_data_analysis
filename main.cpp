#include <vector>
#include <iostream>
#include <cassert>
#include "../include/training_data.hpp"
#include "../include/net.hpp"
#include "../include/vector_utils.h"
//using namespace std; // std:: optional now
// not a good practice to use "using namespace std" in header files,
//but it's more acceptable in source files as long as it doesn't cause naming conflicts.

// std::cout, cmake, enum, pointers, switch case, time cpu cycles, cpu features (ssc/sse)


int main()
{
    TrainingData trainData("/data/trainingData.txt");

    // e.g., { 3, 2, 1 }
    std::vector<unsigned> topology;
    trainData.getTopology(topology);

    Net myNet(topology);

    std::vector<double> inputVals, targetVals, resultVals; // std::vector of doubles, will act like vaiable length array, but from the standad library
    int trainingPass = 0;

    while (!trainData.isEof()) {
        ++trainingPass;
        std::cout << std::endl << "Pass " << trainingPass;

        // Get new input data and feed it forward:
        if (trainData.getNextInputs(inputVals) != topology[0]) {
            break;
        }
        showVectorVals(": Inputs:", inputVals);
        myNet.feedForward(inputVals);

        // Collect the net's actual output results:
        myNet.getResults(resultVals);
        showVectorVals("Outputs:", resultVals);

        // Train the net what the outputs should have been:
        trainData.getTargetOutputs(targetVals);
        showVectorVals("Targets:", targetVals);
        assert(targetVals.size() == topology.back());

        myNet.backProp(targetVals);

        // Report how well the training is working, average over recent samples:
        std::cout << "Net recent average error: "
                << myNet.getRecentAverageError() << std::endl;
    }

    std::cout << std::endl << "Done" << std::endl;
}


// objects may differ in size, unlike pointers
// Pointer is a number/index, which indicates the place in RAM, where something is stored(for example index: 0xf6a7b1)


// unsigned int: 
// bits  value
// 0000    0
// 0001    1
// 0010    2
// 0011    3
// 0100    4
// 0101    5
// 0110    6
// 0111    7
// 1000    8
// 1001    9
// 1010   10
// 1011   11
// 1100   12
// 1101   13
// 1110   14
// 1111   15

// signed int:
// bits  value
// 0000    0
// 0001    1
// 0010    2
// 0011    3
// 0100    4
// 0101    5
// 0110    6
// 0111    7
// 1000   -8
// 1001   -7
// 1010   -6
// 1011   -5
// 1100   -4
// 1101   -3
// 1110   -2
// 1111   -1