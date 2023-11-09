#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MateriaExcepcion{
private:
    string mensaje;

public:
    MateriaExcepcion(string mensaje) : mensaje(mensaje) {}

    string getMensaje() const {
        return mensaje;
    }
};

class Estudiante {
private:
    string nombre;
    vector<string> materias;

};
