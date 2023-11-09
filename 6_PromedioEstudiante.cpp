#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> notas = { 5, 7, 9, 1, 10};

    cout<<"Mis notas son:";
    for (int nota : notas) {
        cout << " " << nota;
    }
    cout << endl;

    int suma = 0;
    for (int nota : notas) {
        suma += nota;
    }

    double promedio = static_cast<double> (suma) / notas.size();

    cout << "El promedio de las calificaciones del alumno es: " << promedio << endl;
    return 0;
}
