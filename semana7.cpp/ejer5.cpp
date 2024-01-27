#include <iostream>
using namespace std;
void mostrar(int resultado){
     cout << "La suma de los numeros es: " << resultado << endl;
}
int sumar(int num1,int num2, int num3, int num4, int num5){
 return num1 + num2 + num3 + num4 + num5;
}
int llenar(){
 int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    return numero;
}
int main (){ 
     int a, b, c, d, e;
    a = llenar();
    b = llenar();
    c = llenar();
    d = llenar();
    e = llenar();
    int resultado = sumar(a, b, c, d, e);
    mostrar(resultado);
    return 0;
}

