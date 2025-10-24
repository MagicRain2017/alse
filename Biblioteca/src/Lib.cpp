#include <iostream>
#include "Libro.h"
using namespace std;

Libro::Libro(string t, string a, string i, bool d) {
    titulo = t;
    autor = a;
    isbn = i;
    disponible = d;
}

string Libro::getTitulo() const { return titulo; }
string Libro::getAutor() const { return autor; }
string Libro::getISBN() const { return isbn; }
bool Libro::getDisponible() const { return disponible; }

void Libro::setDisponible(bool estado) { disponible = estado; }

void Libro::mostrarInfo() const {
    cout << "Titulo: " << titulo
         << ", Autor: " << autor
         << ", ISBN: " << isbn
         << ", Disponible: " << (disponible ? "Si" : "No") << endl;
}
