#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> notas = { 5, 7, 9, 1, 10};

    cout<<"Mis notas son:";
    fot (int notas : calificaciones) {
        cout << " " << notas;
    }
    cout << endl;

    int suma = 0;
    for (int notas : calificaciones) {
        suma += notas;
    }

    double promedio = static_cast <double> (suma) / calificaciones.size();

    cout << "El promedio de las calificaciones del alumno es: " << promedio << endl;
    return 0;
}
