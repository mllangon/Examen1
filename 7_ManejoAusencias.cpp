#include<iostream>
#include<string>
using namespace std;

class RegistroAusencias {
private:
    string fecha;
    string estado;

public:
    RegistroAusencias(string fecha, string estado) : fecha(fecha), estado(estado) {}
    void infoRegistro() {
        cout<<"Fecha de la clase: "<<fecha<<endl;
        cout<<"Estado de la ausencia: "<<estado<<endl;
    }
};


