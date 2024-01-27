#include <iostream>
#include <cctype>
using namespace std;
int contarVocales(const string& oracion) {
    int cantidadVocales = 0;

    for (char caracter : oracion) {
        // Convertir el caracter a minúscula antes de comparar
        char caracterMinuscula = tolower(caracter);

        // Verificar si el caracter es una vocal
        if (caracterMinuscula == 'a' || caracterMinuscula == 'e' ||
            caracterMinuscula == 'i' || caracterMinuscula == 'o' ||
            caracterMinuscula == 'u') {
            cantidadVocales++;
        }
    }

    return cantidadVocales;
}

int main() {
    string oracion;

    // Solicitar al usuario ingresar una oración
    cout << "Ingresa una oracion: ";
    getline(cin, oracion);

    // Contar la cantidad de vocales en la oración
    int cantidadVocales = contarVocales(oracion);

    // Mostrar el resultado
    cout << "\nLa cantidad de vocales (a, e, i, o, u) en la oracion es: " << cantidadVocales << endl;

    return 0;
}