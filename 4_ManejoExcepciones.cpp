#include<iostream>
#include<cmath>
using namespace std;

double calcularRaiz(double numero) {
    if (numero < 0) {
        throw "No se puede calcular la raiz cuadrada de un numero negativo";
    }
    return sqrt(numero);
}
int main(){
    double numero;
    cout<<"Ingrese un numero y calcularemos su raiz cuadrada: ";
    cin>>numero;

    try{
        double resultado = calcularRaiz(numero);
        cout<<"La raiz cuadrada es: "<<resultado<<endl;
    }catch(const char* error){
        cout<<"Esxcepcion atrapada: "<<error<<endl;
    }

}