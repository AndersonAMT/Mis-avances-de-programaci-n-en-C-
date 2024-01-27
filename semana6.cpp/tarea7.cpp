#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Alumno {
    string nombre;
    int edad;
    float calificacion;
};

int main() {
    int numEstudiantes;

    cout << "Ingrese el numero de estudiantes: ";
    cin >> numEstudiantes;

    vector<Alumno> estudiantes(numEstudiantes);

    for (int i = 0; i < numEstudiantes; i++) {
        cout << "\nIngrese informacion para el estudiante " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin.ignore(); 
        getline(cin, estudiantes[i].nombre);
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        cout << "Calificacion: ";
        cin >> estudiantes[i].calificacion;
    }

    cout << "\nInformacion de todos los estudiantes:\n";
    for (const Alumno& estudiante : estudiantes) {
        cout << "Nombre: " << estudiante.nombre << endl;
        cout << "Edad: " << estudiante.edad << endl;
        cout << "Calificacion: " << estudiante.calificacion << endl << endl;
    }

    return 0;
}
