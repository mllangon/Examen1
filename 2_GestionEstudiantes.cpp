#include<iostream>
#include<string>
using namespace std;

class Estudiante {
private:
    string nombre;
    int edad;
    string grado;

public:
    void infoEstudiante() {
        cout << "Registra el nombre del estudiante: ";
        cin >> nombre;
        cout << "Registra la edad del estudiante: ";
        cin >> edad;
        cout << "Registra el grado del estudiante: ";
        cin >> grado;

        cout <<"Nombre: " << nombre << endl;
        cout <<"Edad: " << edad <<" anos"<< endl;
        cout <<"Grado: " << grado << endl;
    }
};

int main(){
    Estudiante estudiante1;
    estudiante1.infoEstudiante();

        return 0;
}
