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
public:
    Estudiante(string nombre): nombre(nombre) {}

    void registrar_materia(const string& materia) {
        if (materia == "Matematicas" || materia == "Fisica" || materia == "Quimica" || materia == "Historia") {
            materias.push_back(materia);
        } else {
            throw MateriaExcepcion("La materia " + materia + " no esta disponible");
        }
    }

};
