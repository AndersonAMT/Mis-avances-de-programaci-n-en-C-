#include <iostream>
using namespace std;
void encontrarMaxMinPorReferencia(const int array[], int longitud, int& maximo, int& minimo) {
    maximo = array[0];
    minimo = array[0];

    for (int i = 1; i < longitud; ++i) {
        if (array[i] > maximo) {
            maximo = array[i];
        }
        if (array[i] < minimo) {
            minimo = array[i];
        }
    }
}

int main() {
    const int miArray[] = {3, 8, 2, 10, 5};

    int maximo, minimo;

    encontrarMaxMinPorReferencia(miArray, 5, maximo, minimo);

    cout << "Maximo: " << maximo << "\nMinimo: " << minimo << endl;

    return 0;
}
