#include <iostream>
using namespace std;
void sumarPorReferencia(int& a, int& b) {
    a += b;
}

void cuadradoPorReferencia(int& x) {
    x = x * x;
}

int main() {
    int a = 15;
    int b = 10;
    cout << "Antes de sumar por referencia: a = " << a << ", b = " << b << endl;
    sumarPorReferencia(a, b);
    cout << "Despues de sumar por referencia: a + b =  " << a << endl;

    int x = 9;
    cout << "Antes de cuadrado por referencia: x = " << x << endl;
    cuadradoPorReferencia(x);
    cout << "Despues de cuadrado por referencia: x = " << x << endl;

    return 0;
}
