#include <iostream>
#include <iomanip>  // para setprecision
using namespace std;

// Función para calcular el subtotal
double calcularSubtotal(double precio, int cantidad) {
    return precio * cantidad;
}

// Función para calcular el impuesto (8%)
double calcularImpuesto(double subtotal) {
    return subtotal * 0.08;
}

// Función para aplicar descuento del 10% si aplica
double aplicarDescuento(double total) {
    if (total > 100) {
        return total * 0.10; // valor del descuento
    }
    return 0.0; // no hay descuento
}

// Función principal
int main() {
    double precio;
    int cantidad;

    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "Ingrese la cantidad del producto: ";
    cin >> cantidad;

    // Validación de entradas
    if (precio < 0 || cantidad <= 0) {
        cout << "Error: El precio debe ser mayor o igual a 0 y la cantidad mayor que 0." << endl;
        return 1;
    }

    // Cálculos
    double subtotal = calcularSubtotal(precio, cantidad);
    double impuesto = calcularImpuesto(subtotal);
    double total = subtotal + impuesto;
    double descuento = aplicarDescuento(total);
    double totalFinal = total - descuento;

    // Mostrar resultados
    cout << fixed << setprecision(2); // 2 decimales
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Impuesto (8%): $" << impuesto << endl;
    cout << "Total antes del descuento: $" << total << endl;

    if (descuento > 0) {
        cout << "Descuento aplicado (10%): -$" << descuento << endl;
    }

    cout << "Costo total final: $" << totalFinal << endl;

    return 0;
}