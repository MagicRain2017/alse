#include "SistemaAlquiler.h"
#include <iostream>
using namespace std;

Vehiculo* SistemaAlquiler::buscarPorPlaca(const string& p) {
    for (auto* v : vehiculos)
        if (v->getPlaca() == p) return v;
    return nullptr;
}

SistemaAlquiler::~SistemaAlquiler() {
    for (auto* v : vehiculos) delete v;
    vehiculos.clear();
}

void SistemaAlquiler::registrarVehiculo(Vehiculo* v) {
    vehiculos.push_back(v);
    cout << "Vehiculo registrado correctamente.\n";
}

void SistemaAlquiler::mostrarVehiculosDisponibles() {
    bool alguno = false;
    for (auto* v : vehiculos)
        if (v->estaDisponible()) {
            v->mostrarInformacion();
            alguno = true;
        }
    if (!alguno)
        cout << "No hay vehiculos disponibles.\n";
}

void SistemaAlquiler::mostrarTodos() {
    if (vehiculos.empty()) {
        cout << "No hay vehiculos registrados.\n";
        return;
    }
    for (auto* v : vehiculos) v->mostrarInformacion();
}

void SistemaAlquiler::alquilarVehiculo(const string& p) {
    Vehiculo* v = buscarPorPlaca(p);
    if (!v) {
        cout << "No se encontro un vehiculo con placa " << p << ".\n";
        return;
    }
    if (!v->estaDisponible()) {
        cout << "El vehiculo ya esta alquilado.\n";
        return;
    }
    v->alquilar();
    cout << "Vehiculo alquilado correctamente.\n";
}

void SistemaAlquiler::devolverVehiculo(const string& p) {
    Vehiculo* v = buscarPorPlaca(p);
    if (!v) {
        cout << "No se encontro un vehiculo con placa " << p << ".\n";
        return;
    }
    if (v->estaDisponible()) {
        cout << "El vehiculo ya estaba disponible.\n";
        return;
    }
    v->devolver();
    cout << "Vehiculo devuelto correctamente.\n";
}
