#include<iostream>
using namespace std;

void cambio(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

