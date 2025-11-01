#include "CarritoCompras.h"
#include <iostream>

void CarritoCompras::agregarProducto(Producto producto, int cantidad) {
    items.push_back(ItemCarrito(producto, cantidad));
    cout << "✅ Producto agregado al carrito.\n";
}

void CarritoCompras::eliminarProducto(string nombre) {
    for (size_t i = 0; i < items.size(); i++) {
        if (items[i].getProducto().getNombre() == nombre) {
            items.erase(items.begin() + i);
            cout << "🗑️ Producto eliminado del carrito.\n";
            return;
        }
    }
    cout << "⚠️ Producto no encontrado.\n";
}

double CarritoCompras::calcularTotal() {
    double total = 0;
    for (size_t i = 0; i < items.size(); i++) {
        total += items[i].getSubtotal();
    }
    return total;
}

void CarritoCompras::mostrarCarrito() {
    if (items.empty()) {
        cout << "🛒 El carrito está vacío.\n";
        return;
    }

    cout << "\n--- Carrito de Compras ---\n";
    for (size_t i = 0; i < items.size(); i++) {
        cout << "Producto: " << items[i].getProducto().getNombre()
             << " | Cantidad: " << items[i].getCantidad()
             << " | Subtotal: $" << items[i].getSubtotal() << endl;
    }
    cout << "Total: $" << calcularTotal() << "\n\n";
}
