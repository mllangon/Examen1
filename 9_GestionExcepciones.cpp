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

    void registrar_materia(const string& materia){
        for(const string& materia_registrada : materias){
            if(materia_registrada == materia){
                throw MateriaExcepcion("La materia ya ha sido registrada");
            }
        }
        materias.push_back(materia);
    }
    void lista(){
        cout << nombre << " registra las siguientes materias: ";
        for(const string&materia : materias){
            cout << " " << materia;
        }
        cout << endl;
    }

};
