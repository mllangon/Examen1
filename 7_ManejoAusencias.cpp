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

int main(){
    RegistroAusencias registro1("12/03/2021","Ausente");
    RegistroAusencias registro2("13/03/2021","Tarde");
    RegistroAusencias registro3("14/03/2021","Tarde");
    RegistroAusencias registro4("15/03/2021","Presente");
    RegistroAusencias registro5("16/03/2021","Ausente");

    registro1.infoRegistro();
    registro2.infoRegistro();
    registro3.infoRegistro();
    registro4.infoRegistro();
    registro5.infoRegistro();

    return 0;
}
