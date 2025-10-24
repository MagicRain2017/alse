#include "Vehiculo.h"
#include <iostream>
using namespace std;

Vehiculo::Vehiculo(string m, string mod, string p)
    : marca(m), modelo(mod), placa(p), disponible(true) {}

Vehiculo::~Vehiculo() {}

void Vehiculo::mostrarInformacion() {
    cout << "Marca: " << marca
         << " | Modelo: " << modelo
         << " | Placa: " << placa
         << " | Estado: " << (disponible ? "Disponible" : "Alquilado") << "\n";
}

bool Vehiculo::estaDisponible() { return disponible; }
void Vehiculo::alquilar() { disponible = false; }
void Vehiculo::devolver() { disponible = true; }
string Vehiculo::getPlaca() { return placa; }
