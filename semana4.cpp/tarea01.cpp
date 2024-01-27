#include <iostream>
using namespace std;
int main()
{
    const int cantidadNumeros = 10;
    int numeros[cantidadNumeros];
    int suma = 0;

    // Solicitar al usuario ingresar 10 números enteros
    cout << "Ingresa 10 numeros enteros:\n";
    for (int i = 0; i < cantidadNumeros; ++i)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    // Calcular el promedio
    double promedio = static_cast<double>(suma) / cantidadNumeros;

    // Mostrar el promedio
    cout << "El promedio de los numeros ingresados es: " << promedio << endl;

    // Contar cuántos números son mayores que el promedio
    int mayoresQuePromedio = 0;
    for (int i = 0; i < cantidadNumeros; ++i)
    {
        if (numeros[i] > promedio)
        {
            mayoresQuePromedio++;
        }
    }

    // Mostrar la cantidad de números mayores que el promedio
    cout << "Hay " << mayoresQuePromedio << " numeros mayores que el promedio." << endl;

    return 0;
}