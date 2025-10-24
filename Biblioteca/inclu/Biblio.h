#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "Libro.h"
using namespace std;

class Biblioteca {
private:
    vector<Libro> libros;

public:
    void agregarLibro();
    void eliminarLibro();
    void buscarPorTitulo() const;
    void mostrarLibrosDisponibles() const;
    void prestarLibro();
    void devolverLibro();
};

#endif
