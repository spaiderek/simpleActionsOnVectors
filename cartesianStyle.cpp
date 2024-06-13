#include "cmath"
#include <iostream>
#include "cartesianStyle.h"

using namespace std;

Cartesian::Cartesian(int a, int b) {
parameterA=a;
parameterB=b;
}
void Cartesian::setParameterA(int a){
    parameterA=a;
}
void Cartesian::setParameterB(int b){
   parameterB=b;
}
double Cartesian::lengthC(){
    return sqrt((parameterA * parameterA)+(parameterB * parameterB));
}
double Cartesian::direction(){
    double rad;
    rad = atan(parameterB/parameterA);
    return rad * (180.0 / M_PI);
}
void Cartesian::phraseC(){
    if (parameterA < 0){
        cout << "Phrase is going into left" << endl;
    } else{
        cout << "Phrase is going into right" << endl;
    }
}