#include <iostream>
using namespace std;

void duplicarArregloPorValor(int arreglo[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        arreglo[i] *= 2;
    }
}

int main() {
    int miArreglo[] = {1, 2, 3, 4, 5};
    int longitud = sizeof(miArreglo) / sizeof(miArreglo[0]);

    duplicarArregloPorValor(miArreglo, longitud);

    cout << "Despues de duplicarArregloPorValor:\n";
    for (int i = 0; i < longitud; i++) {
        cout << miArreglo[i] << " ";
    }

    return 0;
}
