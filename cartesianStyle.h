#ifndef VECTORS_CARTESIANSTYLE_H
#define VECTORS_CARTESIANSTYLE_H

using namespace std;

class Cartesian
{
private:
    int parameterA, parameterB;

public:
    Cartesian(int parameterA=0, int parameterB=0);
    void setParameterA(int parameterA);
    void setParameterB(int parameterB);
    double lengthC();
    double direction();
    void phraseC();


};
#endif//VECTORS_CARTESIANSTYLE_H