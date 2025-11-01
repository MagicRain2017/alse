#include "Producto.h"
using namespace std;

Producto::Producto(string n, float p, int s, int d) {
    nombre = n;
    precio = p;
    stock = s;
    descuento = d;
}

void Producto::actualizarPrecio(float nuevoPrecio) {
    if (nuevoPrecio > 0) {
        precio = nuevoPrecio;
    } else {
        cout << "El precio no puede ser negativo." << endl;
    }
}

void Producto::resumenProducto() const {
    cout << "\n-----------------------------" << endl;
    cout << "Producto: " << nombre << endl;
    cout << "Precio: $" << precio << endl;
    cout << "Stock: " << stock << endl;
    cout << "Descuento: " << descuento << "%" << endl;
    cout << "-----------------------------" << endl;
}

float Producto::vender(int cantidad) {
    if (cantidad <= 0) {
        cout << "Cantidad no valida." << endl;
        return 0;
    }
    if (cantidad > stock) {
        cout << "No hay suficiente stock para vender " << cantidad << " unidades." << endl;
        return 0;
    }

    float precioFinal = precio - (precio * descuento / 100);
    float totalVenta = precioFinal * cantidad;
    stock -= cantidad;

    cout << "Venta realizada de " << cantidad << " unidades por $" << totalVenta << endl;
    return totalVenta;
}

void Producto::reabastecer(int cantidad) {
    if (cantidad > 0) {
        stock += cantidad;
        cout << "Se agregaron " << cantidad << " unidades al stock." << endl;
    } else {
        cout << "Cantidad invalida para reabastecer." << endl;
    }
}

float Producto::consultarValorInventario() const {
    return precio * stock;
}
