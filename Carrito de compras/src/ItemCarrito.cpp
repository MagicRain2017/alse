#include "ItemCarrito.h"

ItemCarrito::ItemCarrito(Producto producto, int cantidad) {
    this->producto = producto;
    this->cantidad = cantidad;
}

Producto ItemCarrito::getProducto() {
    return producto;
}

int ItemCarrito::getCantidad() {
    return cantidad;
}

double ItemCarrito::getSubtotal() {
    return producto.getPrecio() * cantidad;
}

void ItemCarrito::setCantidad(int nuevaCantidad) {
    cantidad = nuevaCantidad;
}
