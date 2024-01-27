#include <iostream>

using namespace std;

int main() {
    const int TAMANO_MAXIMO = 100;  
    char caracteres[TAMANO_MAXIMO];
    int longitudVector;

    cout << "Ingrese la longitud del vector ,no exceda " << TAMANO_MAXIMO << "): ";
    cin >> longitudVector;

    if (longitudVector > TAMANO_MAXIMO || longitudVector <= 0) {
        cout << "Longitud no valida, no exceder del tamaño pedido: " << TAMANO_MAXIMO << ".\n";
        return 1; 
    }
    cout << "Ingrese los caracteres para llenar el vector:\n";
    for (int i = 0; i < longitudVector; i++) {
        cout << "Caracter " << i + 1 << ": ";
        cin >> caracteres[i];
    }
    char caracterBuscado;
    cout << "Ingrese un caracter para contar: ";
    cin >> caracterBuscado;
    int contador = 0;
    for (int i = 0; i < longitudVector; i++) {
        if (caracteres[i] == caracterBuscado) {
            contador++;
        }
    }

    cout << "El caracter  " << caracterBuscado << "' aparece " << contador << " veces en el vector.\n";

    return 0;
}
