#include <iostream>
using namespace std;
void intercambiarPorReferencia(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    intercambiarPorReferencia(num1, num2);

    cout << "Despues de intercambiarPorReferencia:\n";
    cout << "num1: " << num1 << "\nnum2: " << num2 << endl;

    return 0;
}
