#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int FILAS = 3;
const int COLUMNAS = 3;

void llenarMatriz(vector<vector<string>>& matriz) {
    cout << "Ingrese palabras para llenar la matriz:\n";
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            string palabra;
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> palabra;
            matriz[i][j] = palabra;
        }
    }
}

void concatenarPalabras(const vector<vector<string>>& matriz, vector<string>& resultados) {
    for (int i = 0; i < FILAS; i++) {
        string resultadoFila;
        for (int j = 0; j < COLUMNAS; j++) {
            resultadoFila += matriz[i][j] + " ";
        }
        resultados[i] = resultadoFila;
    }
}

void mostrarResultados(const vector<string>& resultados) {
    cout << "\nResultados de la concatenacion por fila:\n";
    for (int i = 0; i < FILAS; i++) {
        cout << "Fila " << i + 1 << ": " << resultados[i] << endl;
    }
}

int main() {
    vector<vector<string>> matriz(FILAS, vector<string>(COLUMNAS));
    vector<string> resultados(FILAS);

    llenarMatriz(matriz);

    concatenarPalabras(matriz, resultados);

    mostrarResultados(resultados);

    return 0;
}
