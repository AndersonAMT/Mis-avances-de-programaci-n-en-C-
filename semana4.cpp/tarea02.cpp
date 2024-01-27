#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string palabra;

    // Solicitar al usuario ingresar una palabra
    cout << "Ingresa una palabra: ";
    cin >> palabra;

    // Eliminar posibles espacios y convertir la palabra a minúsculas
    string palabraFormateada;
    for (char caracter : palabra)
    {
        if (isalpha(caracter))
        {
            palabraFormateada += tolower(caracter);
        }
    }

    // Verificar si la palabra es un palíndromo
    bool esPalindromo = true;
    int longitud = palabraFormateada.length();
    for (int i = 0; i < longitud / 2; ++i)
    {
        if (palabraFormateada[i] != palabraFormateada[longitud - 1 - i])
        {
            esPalindromo = false;
            break;
        }
    }

    // Mostrar el resultado
    if (esPalindromo)
    {
        cout << "La palabra ingresada es un palindromo." << endl;
    }
    else
    {
        cout << "La palabra ingresada no es un palindromo." << endl;
    }

    return 0;
}