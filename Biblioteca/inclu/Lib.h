#ifndef LIBRO_H
#define LIBRO_H

#include <string>
using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    string isbn;
    bool disponible;

public:
    Libro(string t, string a, string i, bool d = true);

    string getTitulo() const;
    string getAutor() const;
    string getISBN() const;
    bool getDisponible() const;

    void setDisponible(bool estado);
    void mostrarInfo() const;
};

#endif
