#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <vector>
#include "CarritoCompras.h"
using namespace std;

class Usuario {
private:
    string nombre;
    vector<CarritoCompras> historialCompras;

public:
    Usuario(string nombre);

    string getNombre();
    void agregarCompra(CarritoCompras carrito);
    void mostrarHistorial();
};

#endif
