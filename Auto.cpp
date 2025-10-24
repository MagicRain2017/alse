#include "Auto.h"
#include <iostream>
using namespace std;

Auto::Auto(string m, string mod, string p, int cap)
    : Vehiculo(m, mod, p), capacidadPasajeros(cap) {}

void Auto::mostrarInformacion() {
    cout << "[AUTO] ";
    Vehiculo::mostrarInformacion();
    cout << "  Capacidad de pasajeros: " << capacidadPasajeros << "\n";
}
