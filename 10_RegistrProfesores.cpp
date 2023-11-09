#include <iostream>
#include <string>
using namespace std;

class Profesor {
private:
    string nombre;
    int edad;
    string materia;
    int experiencia;

public:
    Profesor(string nombre, int edad, string materia, int experiencia) : nombre(nombre), edad(edad), materia(materia), experiencia(experiencia) {}

    void info_profesor(){
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << " anos" << endl;
        cout << "Materia: " << materia << endl;
        cout << "Experiencia: " << experiencia << " anos" << endl;
    }
};