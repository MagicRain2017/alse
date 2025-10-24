#include "Bicicleta.h"
#include <iostream>
using namespace std;

Bicicleta::Bicicleta(string m, string mod, string p, string t)
    : Vehiculo(m, mod, p), tipo(t) {}

void Bicicleta::mostrarInformacion() {
    cout << "[BICICLETA] ";
    Vehiculo::mostrarInformacion();
    cout << "  Tipo: " << tipo << "\n";
}
