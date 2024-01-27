#include <iostream>

using namespace std;

const int FILAS = 3;
const int COLUMNAS = 3;

void llenarMatriz(int matriz[][COLUMNAS], const string& nombre) {
    cout << "Ingrese los elementos para la matriz " << nombre << ":\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << nombre << "[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void sumarMatrices(const int matriz1[][COLUMNAS], const int matriz2[][COLUMNAS], int resultado[][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            resultado[i][j] = matriz1[i][j] * matriz2[i][j];
        }
    }
}

void mostrarMatriz(const int matriz[][COLUMNAS], const string& nombre) {
    cout << "Matriz " << nombre << ":\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz1[FILAS][COLUMNAS];
    int matriz2[FILAS][COLUMNAS];
    int matrizSuma[FILAS][COLUMNAS];

    llenarMatriz(matriz1, "A");
    llenarMatriz(matriz2, "B");

    sumarMatrices(matriz1, matriz2, matrizSuma);

    mostrarMatriz(matriz1, "A");
    cout << endl;
    mostrarMatriz(matriz2, "B");
    cout << endl;
    mostrarMatriz(matrizSuma, "Resultado (A * B)");

    return 0;
}
