#include <iostream>
#include "Biblioteca.h"
using namespace std;

void Biblioteca::agregarLibro() {
    string titulo, autor, isbn;
    cout << "Ingrese el titulo: ";
    getline(cin, titulo);
    cout << "Ingrese el autor: ";
    getline(cin, autor);
    cout << "Ingrese el ISBN: ";
    getline(cin, isbn);
    libros.push_back(Libro(titulo, autor, isbn));
    cout << "Libro agregado correctamente.\n";
}

void Biblioteca::eliminarLibro() {
    string isbn;
    cout << "Ingrese el ISBN del libro a eliminar: ";
    getline(cin, isbn);
    for (int i = 0; i < libros.size(); i++) {
        if (libros[i].getISBN() == isbn) {
            cout << "Libro eliminado: " << libros[i].getTitulo() << endl;
            libros.erase(libros.begin() + i);
            return;
        }
    }
    cout << "No se encontro ningun libro con ese ISBN.\n";
}

void Biblioteca::buscarPorTitulo() const {
    string titulo;
    cout << "Ingrese el titulo del libro: ";
    getline(cin, titulo);
    bool encontrado = false;
    for (const auto& l : libros) {
        if (l.getTitulo() == titulo) {
            l.mostrarInfo();
            encontrado = true;
        }
    }
    if (!encontrado)
        cout << "No se encontro el libro.\n";
}

void Biblioteca::mostrarLibrosDisponibles() const {
    cout << "\nLibros disponibles:\n";
    if (libros.empty()) {
        cout << "No hay libros en la biblioteca.\n";
        return;
    }
    for (const auto& l : libros)
        l.mostrarInfo();
}

void Biblioteca::prestarLibro() {
    string isbn;
    cout << "Ingrese el ISBN del libro a prestar: ";
    getline(cin, isbn);
    for (auto& l : libros) {
        if (l.getISBN() == isbn) {
            if (l.getDisponible()) {
                l.setDisponible(false);
                cout << "Libro prestado correctamente.\n";
            } else {
                cout << "El libro ya esta prestado.\n";
            }
            return;
        }
    }
    cout << "No se encontro ningun libro con ese ISBN.\n";
}

void Biblioteca::devolverLibro() {
    string isbn;
    cout << "Ingrese el ISBN del libro a devolver: ";
    getline(cin, isbn);
    for (auto& l : libros) {
        if (l.getISBN() == isbn) {
            if (!l.getDisponible()) {
                l.setDisponible(true);
                cout << "Libro devuelto correctamente.\n";
            } else {
                cout << "El libro ya estaba disponible.\n";
            }
            return;
        }
    }
    cout << "No se encontro ningun libro con ese ISBN.\n";
}
