#include <iostream>
#include <string>
using namespace std;
int main() {
    int respuestasCorrectas = 0;
    int respuestasIncorrectas = 0;

    // Pregunta 1
    cout << "Pregunta 1: ¿Cual es la capital de Francia?" << endl;
    string respuesta1;
    cin.ignore(); // Limpiar el buffer de entrada
    getline(cin, respuesta1);

    if (respuesta1 == "Paris" || respuesta1 == "Paris") {
        cout << "¡Correcto!" << endl;
        respuestasCorrectas++;
    } else {
        cout << "Correcto. La respuesta correcta es Paris." << endl;
        respuestasIncorrectas++;
    }

    // Pregunta 2
    cout << "\nPregunta 2: ¿Cuantos lados tiene un triangulo?" << endl;
    int respuesta2;
    cin >> respuesta2;

    if (respuesta2 == 3) {
        cout << "¡Correcto!" << endl;
        respuestasCorrectas++;
    } else {
        cout << "Incorrecto. Un triangulo tiene 3 lados." << endl;
        respuestasIncorrectas++;
    }

    // Pregunta 3
    cout << "\nPregunta 3: ¿Cual es el planeta mas grande del sistema solar?" << endl;
    string respuesta3;
    cin.ignore(); // Limpiar el buffer de entrada
    getline(cin, respuesta3);

    if (respuesta3 == "Jupiter" || respuesta3 == "Jupiter") {
        cout << "¡Correcto!" << endl;
        respuestasCorrectas++;
    } else {
        cout << "Incorrecto. El planeta más grande es Jupiter." << endl;
        respuestasIncorrectas++;
    }

    // Mostrar resultados
    cout << "\nResultados:" << endl;
    cout << "Respuestas correctas: " << respuestasCorrectas << endl;
    cout << "Respuestas incorrectas: " << respuestasIncorrectas << endl;

    return 0;
}