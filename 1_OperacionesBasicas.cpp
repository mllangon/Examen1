#include<iostream>
using namespace std;

int main(){
    double a, b;
    char operacion;

    cout<<"Ingrese el primer numero: ";
    cin>> a;

    cout<<"Ingrese operacion: ";
    cin>> operacion;

    cout<<"Ingrese el segundo numero: ";
    cin>> b;

    if (operacion == '+') {
        cout << "Suma: " << a + b << endl;
    } else if (operacion == '-') {
        cout << "Resta: " << a - b << endl;
    } else if (operacion == '*') {
        cout << "Multiplicacion: " << a * b << endl;
    } else if (operacion == '/') {
        // Comprobar si el divisor es cero
        if (b != 0) {
            cout << "Division: " << a / b << endl;
        } else {
            cout << "Error: Division por cero." << endl;
        }
    } else {
        cout << "Operacion no valida." << endl;
    }

    return 0;
}