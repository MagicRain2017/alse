#include "Usuario.h"
#include <iostream>

Usuario::Usuario(string nombre) {
    this->nombre = nombre;
}

string Usuario::getNombre() {
    return nombre;
}

void Usuario::agregarCompra(CarritoCompras carrito) {
    historialCompras.push_back(carrito);
    cout << "💾 Compra agregada al historial.\n";
}

void Usuario::mostrarHistorial() {
    if (historialCompras.empty()) {
        cout << "📂 No hay compras registradas.\n";
        return;
    }

    cout << "\n--- Historial de Compras de " << nombre << " ---\n";
    for (size_t i = 0; i < historialCompras.size(); i++) {
        cout << "Compra #" << i + 1 << ":\n";
        historialCompras[i].mostrarCarrito();
    }
}
