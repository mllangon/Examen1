#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Estudiante {
public:
    Estudiante(string nombre) : nombre(nombre) {}

    void registrarMateria(const string& materia) {
        materias.push_back(materia);
    }