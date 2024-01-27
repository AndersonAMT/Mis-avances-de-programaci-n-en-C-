#include <iostream>
#include <vector>
using namespace std;
bool esPrimo(int numero) {
    if (numero < 2) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;  // No es primo
        }
    }
    return true;  // Es primo
}

int main() {
    int inicio, fin;

    // Solicitar al usuario ingresar los números de inicio y fin
    cout << "Ingrese el numero de inicio: ";
    cin >> inicio;

    cout << "Ingrese el numero de fin: ";
    cin >> fin;

    if (inicio > fin) {
        cerr << "El numero de inicio no puede ser mayor que el numero de fin." << std::endl;
        return 1;
    }

    // Generar un vector con números primos en el rango dado
    vector<int> primos;

    for (int i = inicio; i <= fin; ++i) {
        if (!esPrimo(i)) {
            // Si no es primo, omitir y continuar con el siguiente número
            continue;
        }
        primos.push_back(i);
    }

    // Mostrar el vector con números primos
    cout << "\nNumeros primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int primo : primos) {
        cout << primo << " ";
    }

    return 0;
}