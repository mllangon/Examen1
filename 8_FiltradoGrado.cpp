#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Estudiante {
private:
    string nombre;
    int grado;

public:
    Estudiante(string nombre, int grado) : nombre(nombre), grado(grado) {}
    string getNombre() const {
        return nombre;
    }
    int getGrado() const {
        return grado;
    }
};