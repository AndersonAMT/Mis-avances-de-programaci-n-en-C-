#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vectorOriginal;
    vector<int> vectorSinDuplicados;

    int numElementos;
    cout << "Ingrese la cantidad de elementos en el vector: ";
    cin >> numElementos;

    cout << "Ingrese los elementos del vector:\n";
    for (int i = 0; i < numElementos; ++i) {
        int elemento;
        cout << "Elemento " << i + 1 << ": ";
        cin >> elemento;

        vectorOriginal.push_back(elemento);
    }
    for (int i = 0; i < vectorOriginal.size(); ++i) {
        int elementoActual = vectorOriginal[i];

        for (int j = 0; j < vectorSinDuplicados.size(); ++j) {
            if (elementoActual == vectorSinDuplicados[j]) {
                continue;
            }
        }

        vectorSinDuplicados.push_back(elementoActual);
    }
    cout << "\nVector Original: ";
    for (int elemento : vectorOriginal) {
        cout << elemento << " ";
    }
    cout << "\nVector Sin Duplicados: ";
    for (int elemento : vectorSinDuplicados) {
        cout << elemento << " ";
    }

    return 0;
}