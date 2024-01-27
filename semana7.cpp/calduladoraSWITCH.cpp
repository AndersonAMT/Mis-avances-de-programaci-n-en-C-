#include <iostream>
using namespace std;

int main()
{
    int opcion = 0;
    int a, b;
    cout<<"Opcion 1: Suma \n Opcion 2: resta \n Opcion 3: Multiplicacion \n Opcion 4:Division";
    cout <<"\nIngrese una opcion: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        cout << "Ingresa un numero: ";
        cin >> a;
        cout << "Ingresa un numero: ";
        cin >> b;
        cout << a + b;
        break;
    case 2:
        cout << "Ingresa un numero: ";
        cin >> a;
        cout << "Ingresa un numero: ";
        cin >> b;
        cout << a - b;
        break;
    case 3:
        cout << "Ingresa un numero: ";
        cin >> a;
        cout << "Ingresa un numero: ";
        cin >> b;
        cout << a * b;
        break;  
    case 4:
        cout << "Ingresa un numero: ";
        cin >> a;
        cout << "Ingresa un numero: ";
        cin >> b;
        cout << a / b;
        break;  
    }

    return 0;
}