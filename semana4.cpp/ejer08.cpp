#include <iostream>
using namespace std;
int main(){
    int contador = 0;
    int suma = 0;
    int numero;
    cout<<"Ingrese los numeros que quiere sumar: ";
    while (true){
        cout << "Ingresa el numero " << contador + 1 << ":\n ";
        cin >> numero;
        suma += numero;
        contador++;
        if(contador==7)
        break;
    }
    cout << "La suma de los 7 numeros es " << suma << endl;
    return 0;
}


