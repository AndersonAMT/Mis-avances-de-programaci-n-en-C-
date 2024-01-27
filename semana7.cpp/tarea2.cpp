#include <iostream>
#include <cstring>
using namespace std;

string concatenarCadenasPorValor(const char cadena1[], const char cadena2[]) {
    string resultado = cadena1;
    resultado += cadena2;
    return resultado;
}

int main() {
    const char cadena1[] = "Hola, ";
    const char cadena2[] = "mundo!";

    string resultadoConcatenado = concatenarCadenasPorValor(cadena1, cadena2);

    cout << "Despues de concatenarCadenasPorValor:\n";
    cout << resultadoConcatenado << endl;

    return 0;
}
