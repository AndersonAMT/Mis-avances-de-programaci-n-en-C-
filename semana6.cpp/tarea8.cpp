#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anoPublicacion;
};

int main() {
    int numLibros;

    cout << "Ingrese el numero de libros: ";
    cin >> numLibros;

    vector<Libro> libros(numLibros);

    for (int i = 0; i < numLibros; i++) {
        cout << "\nIngrese informacion para el libro " << i + 1 << ":\n";
        cout << "Titulo: ";
        cin.ignore(); 
        getline(cin, libros[i].titulo);
        cout << "Autor: ";
        getline(cin, libros[i].autor);
        cout << "Anio de publicacion: ";
        cin >> libros[i].anoPublicacion;
    }
    cout << "\nInformacion de todos los libros:\n";
    for (const Libro& libro : libros) {
        cout << "Titulo: " << libro.titulo << endl;
        cout << "Autor: " << libro.autor << endl;
        cout << "Anio de publicacion: " << libro.anoPublicacion << endl << endl;
    }

    return 0;
}
