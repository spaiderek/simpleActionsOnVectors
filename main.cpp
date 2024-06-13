#include <iostream>
#include "cartesianStyle.h"
#include "PolarStyle.h"
#include "ActionsVectors.h"
using namespace std;

void menu(void){
    cout << "Chose:\n"
            "1. Cartesian (adding parameters)\n"
            "2. Polar (adding angle of inclination and length)\n"
            "3. Actions (easy calculations on two vectors)\n"
            "0. EXIT" << endl;
}
void miniMenu1(void){
    cout << "What do you want to do?\n"
            "1. Calculate length\n"
            "2. Calculate direction\n"
            "3. Define phrase\n"
            "4. Do all" << endl;
}
void miniMenu2(void){
    cout <<"What do you want to do?\n"
           "1. Calculate parameter X\n"
           "2. Calculate parameter Y\n"
           "3. Define phrase\n"
           "4. Do all" << endl;
}
void miniMenu3(void){
    cout <<"What do you want to do?\n"
           "1. Summary vectors\n"
           "2. Subtract vectors\n"
           "3. Calculate scalar\n"
           "4. Do all" << endl;
}

int main() {
    Cartesian cartesian;
    Polar polar;
    Actions actions;

int ch = 0;
do{
    menu();
    cin >> ch;

    switch (ch) {
        case 0:{
            break;
        }
        case 1:{
            int car;
            int a = 0;
            int b = 0;
            cout << "Parameter x: ";
            cin >> a;
            cartesian.setParameterA(a);
            cout << "Parameter y: ";
            cin >> b;
            cartesian.setParameterB(b);
            miniMenu1();
            cin >> car;
            switch (car){
                case 1:{
                    cout << "The length of vector is: " << cartesian.lengthC() << endl;
                    break;
                }
                case 2:{
                    cout << "The direction of vector is: " << cartesian.direction() << " rad" << endl;
                    break;
                }
                case 3:{
                    cartesian.phraseC();
                    break;
                }
                case 4:{
                    cout << "The length of vector is: " << cartesian.lengthC() << endl;
                    cout << "The direction of vector is: " << cartesian.direction() << " rad" << endl;
                    cartesian.phraseC();
                    break;
                }
            }
            break;
        }
        case 2:{
            int pol;
            int d = 0;
            int l = 0;
            cout << "Angle of inclination:";
            cin >> d;
            polar.setDegree(d);
            cout << "Length: ";
            cin >> l;
            polar.setLength(l);
            miniMenu2();
            cin >> pol;
            switch (pol){
                case 1:{
                    cout << "The parameter X = " << polar.parameterAP() << endl;
                    break;
                }
                case 2:{
                    cout << "The parameter Y " << polar.parameterBP() << endl;
                    break;
                }
                case 3:{
                    polar.phraseP();
                    break;
                }
                case 4:{
                    cout << "The parameter X = " << polar.parameterAP() << endl;
                    cout << "The parameter Y = " << polar.parameterBP() << endl;
                    polar.phraseP();
                    break;
                }
            }
            break;
        }
        case 3:{
            int act;
            int XA = 0;
            int XB = 0;
            int YA = 0;
            int YB = 0;
            cout << "Adding first vector:" << endl;
            cout << "Parameter X:";
            cin >> XA;
            actions.setParameterXA(XA);
            cout << "Parameter Y:";
            cin >> YA;
            actions.setParameterYA(YA);
            cout << "Adding second vector:" << endl;
            cout << "Parameter X:";
            cin >> XB;
            actions.setParameterXB(XB);
            cout << "Parameter Y:";
            cin >> YB;
            actions.setParameterYB(YB);
            miniMenu3();
            cin >> act;
            switch (act){
                case 1:{
                    cout << "Summary of vectors = (" << actions.summaryX() << " ," << actions.summaryY() << " )" << endl;
                    break;
                }
                case 2:{
                    cout << "Subtract of vectors = (" << actions.subtractX() << " ," << actions.subtractY() << " )" << endl;
                    break;
                }
                case 3:{
                    cout << "scalar =" << actions.scalar() << endl;
                    break;
                }
                case 4:{
                    cout << "Summary of vectors = (" << actions.summaryX() << " ," << actions.summaryY() << " )" << endl;
                    cout << "Subtract of vectors = (" << actions.subtractX() << " ," << actions.subtractY() << " )" << endl;
                    cout << "scalar =" << actions.scalar() << endl;
                    break;
                }
            }
            break;
        }
        default: {
            cout << "\nPlease enter a valid choice!" << endl;
        }
    }
}while(ch !=0);

cout << "THE END" << endl;

    return 0;
}