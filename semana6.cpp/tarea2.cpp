#include <iostream>
#include <string>

using namespace std;

int main() {
    const int TAMANO_MAXIMO = 100;  
    string palabras[TAMANO_MAXIMO];
    int cantidadPalabras = 0;

    cout << "Ingrese palabras (ingrese 'fin' para terminar):\n";

    string palabra;
    while (true) {
        cout << "Ingrese una palabra: ";
        cin >> palabra;

        if (palabra == "fin" || cantidadPalabras >= TAMANO_MAXIMO) {
            break;
        }
        palabras[cantidadPalabras] = palabra;
        cantidadPalabras++;
    }
    string resultado;
    for (int i = 0; i < cantidadPalabras; i++) {
        resultado += palabras[i] + " ";
    }

    cout << "\nResultado de la concatenacion:\n" << resultado << endl;

    return 0;
}
