#include <iostream>
#include "Biblioteca.h"
using namespace std;

int main() {
    Biblioteca b;
    int opcion;

    do {
        cout << "\n==== MENU BIBLIOTECA ====\n";
        cout << "1. Agregar libro\n";
        cout << "2. Eliminar libro\n";
        cout << "3. Buscar libro por titulo\n";
        cout << "4. Mostrar libros disponibles\n";
        cout << "5. Prestar libro\n";
        cout << "6. Devolver libro\n";
        cout << "7. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                b.agregarLibro();
                break;
            case 2:
                b.eliminarLibro();
                break;
            case 3:
                b.buscarPorTitulo();
                break;
            case 4:
                b.mostrarLibrosDisponibles();
                break;
            case 5:
                b.prestarLibro();
                break;
            case 6:
                b.devolverLibro();
                break;
            case 7:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion no valida.\n";
        }
    } while (opcion != 7);

    return 0;
}
