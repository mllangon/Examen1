#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> notas = { 5, 7, 9, 1, 10};

    cout<<"Mis notas son:";
    fot (int notas : notas) {
        cout << " " << notas;
    }
    cout << endl;
}
