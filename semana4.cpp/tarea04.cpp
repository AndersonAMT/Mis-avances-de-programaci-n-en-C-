#include <iostream>
using namespace std;
void generarSecuenciaCollatz(int n) {
    cout << "Secuencia de Collatz para " << n << ": ";

    while (n != 1) {
        cout << n << " ";

        // Aplicar reglas de la secuencia de Collatz
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
    }

    cout << "1" << endl; // Imprimir el último elemento (1) de la secuencia
}

int main() {
    int numero;

    // Solicitar al usuario ingresar un número entero positivo
    cout << "Ingresa un numero entero positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cerr << "Por favor, ingresa un numero entero positivo." << endl;
        return 1;
    }

    // Generar y mostrar la secuencia de Collatz
    generarSecuenciaCollatz(numero);

    return 0;
}