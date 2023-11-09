#include<iostream>
using namespace std;

void cambio(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int num = 3;
    int num2= 7;

cout<<"Valores sin cambio, primero =  "<< num <<" ,segundo = "<< num2 <<endl;
int *ptr = &num;
int *ptr2 = &num2;

cambio(ptr,ptr2);
cout<<"Valores cambiados, primero = "<< num <<" ,segundo = "<< num2 <<endl;

    return 0;
}