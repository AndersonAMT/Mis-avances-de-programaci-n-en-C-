#include <iostream>
#include <algorithm>  // Para utilizar la función sort

using namespace std;

int main() {
    const int TAMANO_MAXIMO = 10; 
    int numeros[TAMANO_MAXIMO];
    int cantidadNumeros = 0;

    cout << "Ingrese numero 10 numeros\n";

    int num;
    do {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num >= 0 && cantidadNumeros < TAMANO_MAXIMO) {
            numeros[cantidadNumeros] = num;
            cantidadNumeros++;
        }
    } while (num >= 0 && cantidadNumeros < TAMANO_MAXIMO);

    sort(numeros, numeros + cantidadNumeros);

    cout << "Aqui estan los numeros ordenados de manera ascendente:\n";
    for (int i = 0; i < cantidadNumeros; i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}
