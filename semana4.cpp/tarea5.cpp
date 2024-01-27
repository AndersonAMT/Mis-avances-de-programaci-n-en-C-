#include <iostream>
#include <cctype>
using namespace std;
string cifrarCesar(const string& cadena, int clave) {
    string cifrada = "";

    for (char caracter : cadena) {
        if (isalpha(caracter)) {
            char base = (islower(caracter)) ? 'a' : 'A';
            cifrada += static_cast<char>((caracter - base + clave) % 26 + base);
        } else {
            cifrada += caracter;
        }
    }

    return cifrada;
}

int main() {
    string cadena;
    int clave;

    // Solicitar al usuario ingresar una cadena
    cout << "Ingresa una cadena: ";
    getline(cin, cadena);

    // Solicitar al usuario ingresar la clave del cifrado
    cout << "Ingresa la clave del cifrado Cesar (un numero entero): ";
    cin >> clave;

    // Realizar el cifrado Cesar y mostrar el resultado
    string cifrada = cifrarCesar(cadena, clave);
    cout << "Cadena cifrada: " << cifrada << endl;

    return 0;
}