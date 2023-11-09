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

cout<<"Valores sin cambio, 1º =  "<< num <<" ,2º = "<< num2 <<endl;
int *ptr = &num;
int *ptr2 = &num2;

}