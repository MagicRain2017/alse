#include <iostream>
#include "SistemaAlquiler.h"
#include "Auto.h"
#include "Bicicleta.h"
using namespace std;

int main() {
    SistemaAlquiler sistema;

    sistema.registrarVehiculo(new Auto("Toyota", "Corolla", "ABC123", 5));
    sistema.registrarVehiculo(new Bicicleta("GW", "Hydra", "BIKE-001", "Montaña"));

    cout << "\n=== Vehiculos disponibles ===\n";
    sistema.mostrarVehiculosDisponibles();

    sistema.alquilarVehiculo("ABC123");

    cout << "\n=== Después del alquiler ===\n";
    sistema.mostrarVehiculosDisponibles();

    sistema.devolverVehiculo("ABC123");

    cout << "\n=== Después de devolver ===\n";
    sistema.mostrarVehiculosDisponibles();

    return 0;
}
