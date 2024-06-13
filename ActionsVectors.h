#ifndef VECTORS_ACTIONSVECTORS_H
#define VECTORS_ACTIONSVECTORS_H

using namespace std;
class Actions {
private:
    int parameterXA, parameterYA, parameterXB, parameterYB;
public:
    Actions(int parameterXA= 0, int parameterYA= 0,int parameterXB= 0,int parameterYB= 0);
    void setParameterXA(int parameterXA);
    void setParameterYA(int parameterYA);
    void setParameterXB(int parameterXB);
    void setParameterYB(int parameterYB);
    double summaryX();
    double summaryY();
    double subtractX();
    double subtractY();
    double scalar();

};
#endif//VECTORS_ACTIONSVECTORS_H