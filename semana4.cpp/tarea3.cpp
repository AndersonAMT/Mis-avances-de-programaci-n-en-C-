#include <iostream>
using namespace std;
const int MAX_FILAS = 10;

int main() {
    int n;

    // Solicitar al usuario el tamaño de la matriz cuadrada
    cout << "Ingresa el tamaño de la matriz cuadrada (maximo " << MAX_FILAS << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_FILAS) {
        cerr << "Tamaño de matriz no valido." << endl;
        return 1;
    }

    // Declarar la matriz
    int matriz[MAX_FILAS][MAX_FILAS];

    // Solicitar al usuario ingresar los elementos de la matriz
    cout << "Ingresa los elementos de la matriz:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Elemento [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calcular la matriz transpuesta
    int transpuesta[MAX_FILAS][MAX_FILAS];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    // Imprimir la matriz transpuesta
    cout << "\nMatriz Transpuesta:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}