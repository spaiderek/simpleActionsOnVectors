#ifndef VECTORS_POLARSTYLE_H
#define VECTORS_POLARSTYLE_H

using namespace std;

class Polar
{
private:
    double degree, length;

public:
    Polar(double degree=0, double length=0);
    void setDegree(double degree);
    void setLength(double length);
    double parameterAP();
    double parameterBP();
    void phraseP();
};
#endif//VECTORS_POLARSTYLE_H