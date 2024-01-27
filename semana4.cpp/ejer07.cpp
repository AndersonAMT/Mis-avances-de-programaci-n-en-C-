#include <iostream>
using namespace std;
int main()
{
    int contador = 0;
    double suma = 0;
    double numero;
    while (contador < 7)
    {
        cout << "enter the number " << contador + 1 << ": ";
        cin >> numero;
        suma += numero;
        contador++;
    }
    cout << "The sum of the 7 numbers is: " << suma << endl;

    return 0;
}