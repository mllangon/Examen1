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

    void listarmaterias() {
        cout << nombre << " registra las siguientes materias";
        for (size_t i = 0; i < materias.size(); i++) {
            cout << " " << materias[i];
            if  (i < materias.size() - 1){
                cout << ",";
            }
        }
        cout<<endl;
    }

private:
    string nombre;
    vector<string> materias;
};

int main(){
    Estudiante estudiante("Mario");

    estudiante.registrarMateria("Matematicas");
    estudiante.registrarMateria("Fisica");
    estudiante.registrarMateria("Quimica");
    estudiante.registrarMateria("Historia");

    estudiante.listarmaterias();

    return 0;

}
