//Escriba un programa en C++ que solicite tres valores y de acuerdo a ellos, 
//indique si la figura es un: cuadrado, rectángulo, círculo, triángulo equilátero, 
//triángulo escaleno o triángulo isósceles. 
#include <iostream>

using namespace std;

int main() {
    double A, B, C;
    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de B: ";
    cin >> B;
    cout << "Ingrese el valor de C: ";
    cin >> C;
    //triangulos
    if (A > 0 && B > 0 && C > 0) {
        if (A == B && B == C) {
            cout << "La figura es un triangulo equilatero" << endl;
        } else if (A != B && B != C && A != C) {
            cout << "La figura es un triangulo escaleno" << endl;
        } else {
            cout << "La figura es un triangulo isosceles" << endl;
        }
    } 
    //cuadrilateros
    else if ((A > 0 && B > 0 && C == 0) || (A > 0 && C > 0 && B == 0) || (B > 0 && C > 0 && A == 0)) {
        if ((A == B && C == 0) || (A == C && B == 0) || (B == C && A == 0)) {
            cout << "La figura es un cuadrado" << endl;
        } else {
            cout << "La figura es un rectangulo" << endl;
        }
    } 
    //circulo
    else if ((A > 0 && B == 0 && C == 0) || (B > 0 && A == 0 && C == 0) || (C > 0 && A == 0 && B == 0)) {
        cout << "La figura es un circulo" << endl;
    } 
    else {
        cout << "Los valores no indican figura" << endl;
    }
    return 0;
}