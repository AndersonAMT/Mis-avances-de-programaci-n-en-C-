#include <iostream>
using namespace std;
struct Punto {
    double x;
    double y;
};

void trasladarPuntoPorValor(Punto punto, double dx, double dy) {
    punto.x += dx;
    punto.y += dy;
}

int main() {
    Punto miPunto = {2.5, 3.0};

    trasladarPuntoPorValor(miPunto, 1.0, 2.0);

    cout << "Despues de trasladar punto por valor:\n";
    cout << "x: " << miPunto.x << ", y: " << miPunto.y << endl;

    return 0;
}
