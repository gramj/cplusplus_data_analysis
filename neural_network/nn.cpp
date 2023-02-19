#include <vector>
using namespace std; // std:: optional now


class Net
{
    public:
        Net(const vector<unsigned int> &topology); // constructor
        // methods:
        void feedForward(const vector<double> &inputVals); // inputVals wont be changed
        void backProp(const vector<double> &targetVals);
        void getResults(vector<double> &resultVals) const; // const for output because onject wont be changed by this method

    private:
};

int main()
{
    vector<unsigned int> topology;
    Net myNet(topology);

    vector<double> inputVals; // std::vector of doubles, will act like vaiable length array, but from the standad library
    myNet.feedForward(inputVals);

    vector<double> targetVals;
    myNet.backProp(targetVals);

    vector<double> resultVals;
    myNet.getResults(resultVals);
}



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