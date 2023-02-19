#ifndef NEURON_H
#define NEURON_H

#include <vector>
#include "src/neural_network/data_classes/connection.hpp"

class Neuron;

typedef std::vector<Neuron> Layer;
// The line typedef std::vector<Neuron> Layer; defines a new type Layer which is an alias for std::vector<Neuron>.
// This can be useful when you want to use a vector of neurons multiple times, for example, in the neural network code.

class Neuron
{
public:
    Neuron(unsigned numOutputs, unsigned myIndex);
    void setOutputVal(double val);
    double getOutputVal() const;
    void feedForward(const Layer& prevLayer);
    void calcOutputGradients(double targetVal);
    void calcHiddenGradients(const Layer& nextLayer);
    void updateInputWeights(Layer& prevLayer);

private:
    static double eta; // overall net learning rate, [0.0..1.0]
    static double alpha; // momentum, multiplier of last deltaWeight, [0.0..1.0]
    static double transferFunction(double x);
    static double transferFunctionDerivative(double x);
    static double randomWeight();
    double sumDOW(const Layer& nextLayer) const;

    double m_outputVal;
    std::vector<Connection> m_outputWeights;
    unsigned m_myIndex;
    double m_gradient;
};

#endif // NEURON_H


// In C++, there are three access modifiers: public, private, and protected. They determine the access level of class members
// (functions and variables).
// Public members can be accessed from anywhere, including outside the class.
// Private members can only be accessed by member functions of the same class.
// Protected members are similar to private members, but they can be accessed by derived classes as well.
// The purpose of access modifiers is to control access to the class members, so that only the appropriate functions
// can access and modify the data.