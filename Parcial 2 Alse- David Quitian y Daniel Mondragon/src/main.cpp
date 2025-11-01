#include <iostream>
#include <vector>
#include <fstream>
#include "Producto.h"
using namespace std;

int main() {
    vector<Producto> productos;

    productos.push_back(Producto("Laptop", 3500000, 5, 10));
    productos.push_back(Producto("Mouse", 80000, 20, 5));
    productos.push_back(Producto("Teclado", 150000, 10, 8));

    cout << "\n=== INVENTARIO INICIAL ===" << endl;
    for (auto &p : productos) {
        p.resumenProducto();
    }

    productos[0].vender(2);
    productos[1].reabastecer(10);
    productos[2].actualizarPrecio(170000);

    cout << "\n=== INVENTARIO FINAL ===" << endl;
    float totalInventario = 0;
    for (auto &p : productos) {
        p.resumenProducto();
        totalInventario += p.consultarValorInventario();
    }

    cout << "\nValor total del inventario: $" << totalInventario << endl;

    ofstream reporte("reporte.txt");
    if (reporte.is_open()) {
        reporte << "==============================\n";
        reporte << "   REPORTE DE INVENTARIO\n";
        reporte << "==============================\n\n";
        reporte << "Nombre\t\tPrecio\t\tValor Inventario\n";
        reporte << "--------------------------------------------\n";

        for (auto &p : productos) {
            reporte << p.getNombre() << "\t\t$" << p.getPrecio()
                    << "\t\t$" << p.consultarValorInventario() << "\n";
        }

        reporte << "--------------------------------------------\n";
        reporte << "Valor total del inventario: $" << totalInventario << "\n";
        reporte.close();

        cout << "\nArchivo 'reporte.txt' generado correctamente.\n";
    } else {
        cout << "Error al crear el reporte." << endl;
    }

    return 0;
}
