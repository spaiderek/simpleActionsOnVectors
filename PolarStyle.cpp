#include "cmath"
#include <iostream>
#include "PolarStyle.h"

using namespace std;
Polar::Polar(double d, double l) {
    degree=d;
    length=l;
}

void Polar::setDegree(double d) {
    degree=d;
}

void Polar::setLength(double l) {
    length=l;
}

double Polar::parameterAP() {
    double rad;
    rad= degree * (M_PI / 180.0);
    return length * sin(rad);
}
double Polar::parameterBP() {
    double rad;
    rad= degree * (M_PI / 180.0);
    return length * cos(rad);
}

void Polar::phraseP() {
    double A;
    double rad;
    rad= degree * (M_PI / 180.0);
    A = length * sin(rad);
    if (A<0){
        cout << "Phrase is going into left" << endl;
    } else{
        cout << "Phrase is going into right" << endl;
    }
}