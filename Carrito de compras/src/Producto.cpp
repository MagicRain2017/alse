#include "Producto.h"

Producto::Producto() {
    nombre = "";
    precio = 0.0;
    stock = 0;
}

Producto::Producto(string nombre, double precio, int stock) {
    this->nombre = nombre;
    this->precio = precio;
    this->stock = stock;
}

string Producto::getNombre() {
    return nombre;
}

double Producto::getPrecio() {
    return precio;
}

int Producto::getStock() {
    return stock;
}

void Producto::setStock(int nuevoStock) {
    stock = nuevoStock;
}
