#ifndef CARRITOCOMPRAS_H
#define CARRITOCOMPRAS_H

#include <vector>
#include "ItemCarrito.h"
using namespace std;

class CarritoCompras {
private:
    vector<ItemCarrito> items;

public:
    void agregarProducto(Producto producto, int cantidad);
    void eliminarProducto(string nombre);
    double calcularTotal();
    void mostrarCarrito();
};

#endif
