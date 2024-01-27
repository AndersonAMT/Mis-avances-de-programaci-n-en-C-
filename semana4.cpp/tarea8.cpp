#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numeros;

    // Solicitar al usuario ingresar elementos al vector
    int numElementos;
    cout << "Ingrese la cantidad de elementos en el vector: ";
    cin >> numElementos;

    cout << "Ingrese los elementos del vector:\n";
    for (int i = 0; i < numElementos; ++i) {
        int elemento;
        cout << "Elemento " << i + 1 << ": ";
        cin >> elemento;

        numeros.push_back(elemento);
    }

    // Encontrar el mayor elemento usando un bucle for y break
    int mayorElemento = numeros[0];
    for (int i = 1; i < numeros.size(); ++i) {
        if (numeros[i] > mayorElemento) {
            mayorElemento = numeros[i];
            break;
        }
    }

    cout << "\nEl mayor elemento en el vector es: " << mayorElemento << std::endl;

    return 0;
}