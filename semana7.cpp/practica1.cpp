#include <iostream>
using namespace std;

void suma(int TAM[], int cantidad, int &resultado);
int main (){

    int cantidad;
    int resultado = 0;
    cout<<"Ingrese la cantidad de numeros para sumar: ";
    cin>>cantidad;

    int TAM[cantidad];
    for (size_t i = 0; i < cantidad; i++){
        cout<<"Ingrese el numero" << 1 + i <<": ";
        cin>> TAM [i];

    }
    suma(TAM, cantidad, resultado);
    cout<<"El resultado es: " <<resultado << endl;
    return 0;
}

void suma(int TAM[], int cantidad, int &resultado){
    for (size_t i = 0 ; i < cantidad; i++){
        resultado += TAM[i];
    }
}