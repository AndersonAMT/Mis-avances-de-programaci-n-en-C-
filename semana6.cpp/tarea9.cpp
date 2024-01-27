#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int NUM_CALIFICACIONES = 5;  

struct Estudiante {
    string nombre;
    int calificaciones[NUM_CALIFICACIONES];
    float promedio;
};

float calcularPromedio(const Estudiante& estudiante) {
    int suma = 0;
    for (int i = 0; i < NUM_CALIFICACIONES; i++) {
        suma += estudiante.calificaciones[i];
    }
    return static_cast<float>(suma) / NUM_CALIFICACIONES;
}

int main() {
    int numEstudiantes;

    cout << "Ingrese el numero de estudiantes: ";
    cin >> numEstudiantes;

    vector<Estudiante> estudiantes(numEstudiantes);

    for (int i = 0; i < numEstudiantes; i++) {
        cout << "\nIngrese informacion para el estudiante " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin.ignore(); 
        getline(cin, estudiantes[i].nombre);

        cout << "Ingrese las calificaciones (separadas por espacio) para " << estudiantes[i].nombre << ": ";
        for (int j = 0; j < NUM_CALIFICACIONES; j++) {
            cin >> estudiantes[i].calificaciones[j];
        }
        estudiantes[i].promedio = calcularPromedio(estudiantes[i]);
    }
    cout << "\nPromedio de calificaciones para cada estudiante:\n";
    for (const Estudiante& estudiante : estudiantes) {
        cout << "Estudiante: " << estudiante.nombre << ", Promedio: " << estudiante.promedio << endl;
    }

    return 0;
}
