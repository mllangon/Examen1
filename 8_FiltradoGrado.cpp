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
int main(){
    vector<Estudiante> estudiantes;

    estudiantes.push_back(Estudiante("Mario", 11));
    estudiantes.push_back(Estudiante("Alberto", 3));
    estudiantes.push_back(Estudiante("Maria", 5));
    estudiantes.push_back(Estudiante("Sergio", 7));
    estudiantes.push_back(Estudiante("Laura", 9));

cout<<"Grados disponibles: ";
for (const Estudiante& estudiante : estudiantes) {
    cout << estudiante.getNombre() << "- Grado: "<<estudiante.getGrado() << endl;

}