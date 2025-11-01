#include <iostream>
#include "Usuario.h"
using namespace std;

int main() {
    Usuario usuario("Quitián");
    CarritoCompras carrito;

    int opcion;
    do {
        cout << "\n===== MENÚ PRINCIPAL =====\n";
        cout << "1. Agregar producto al carrito\n";
        cout << "2. Eliminar producto del carrito\n";
        cout << "3. Mostrar carrito\n";
        cout << "4. Finalizar compra\n";
        cout << "5. Ver historial de compras\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if (opcion == 1) {
            string nombre;
            double precio;
            int stock, cantidad;

            cout << "Ingrese nombre del producto: ";
            cin >> nombre;
            cout << "Ingrese precio: ";
            cin >> precio;
            cout << "Ingrese stock: ";
            cin >> stock;
            cout << "Ingrese cantidad: ";
            cin >> cantidad;

            Producto p(nombre, precio, stock);
            carrito.agregarProducto(p, cantidad);
        }
        else if (opcion == 2) {
            string nombre;
            cout << "Ingrese nombre del producto a eliminar: ";
            cin >> nombre;
            carrito.eliminarProducto(nombre);
        }
        else if (opcion == 3) {
            carrito.mostrarCarrito();
        }
        else if (opcion == 4) {
            usuario.agregarCompra(carrito);
            cout << "Compra finalizada con éxito.\n";
            carrito = CarritoCompras(); // Reinicia el carrito
        }
        else if (opcion == 5) {
            usuario.mostrarHistorial();
        }
        else if (opcion == 6) {
            cout << "👋 Saliendo del sistema...\n";
        }
        else {
            cout << "Opción no válida.\n";
        }

    } while (opcion != 6);

    return 0;
}
