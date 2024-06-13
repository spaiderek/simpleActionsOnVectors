#include "cmath"
#include <iostream>
#include "ActionsVectors.h"

using namespace std;
Actions::Actions(int XA, int YA, int XB, int YB) {
    //vectorA
    parameterXA= XA;
    parameterYA= YA;
    //vectorB
    parameterXB= XB;
    parameterYB= YB;
}

void Actions::setParameterXA(int XA) {
    parameterXA= XA;
}

void Actions::setParameterYA(int YA) {
    parameterYA= YA;
}

void Actions::setParameterXB(int XB) {
    parameterXB= XB;
}

void Actions::setParameterYB(int YB) {
    parameterYB= YB;
}

double Actions::summaryX() {
    return parameterXA + parameterXB;
}

double Actions::summaryY() {
    return parameterYA + parameterYB;
}

double Actions::subtractX() {
    return parameterXA - parameterXB;
}

double Actions::subtractY() {
    return parameterYA - parameterYB;
}

double Actions::scalar() {
    int X;
    int Y;
    X = parameterXA * parameterXB;
    Y = parameterYA * parameterYB;
    return X + Y;
}
