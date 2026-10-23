//Escriba un programa en C++ que calcule el área de un rectángulo. 
//El programa debe solicitar el valor para el lado A y el valor para el lado B, y desplegar
// un mensaje con el resultado del área de acuerdo a los valores dados.
#include <iostream>
using namespace std;
int main(){
    int a,b,area;
    cout<<"Valor lado a: ";
    cin>>a;
    cout<<"Valor lado b: ";
    cin>>b;
    area=a*b;
    if (a==0 || b==0){
        cout<<"Ninguno de los valores pueden ser 0";
    }else if (a==b){
        cout<<"El resultado del area es: "<<area<<" y es un cuadrado";
    }else{cout<<"El resultado del area es: "<<area;
    }
}
//errores
//1. condicion if mal planteada
//2. falto recibir el lado b "cin>>b"
//3. falto el segundo if para comprobar si es un cuadrado o no