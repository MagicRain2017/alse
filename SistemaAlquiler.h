#ifndef SISTEMAALQUILER_H
#define SISTEMAALQUILER_H

#include <vector>
#include "Vehiculo.h"

class SistemaAlquiler {
private:
    std::vector<Vehiculo*> vehiculos;
    Vehiculo* buscarPorPlaca(const std::string& p);

public:
    ~SistemaAlquiler();
    void registrarVehiculo(Vehiculo* v);
    void mostrarVehiculosDisponibles();
    void mostrarTodos();
    void alquilarVehiculo(const std::string& p);
    void devolverVehiculo(const std::string& p);
};

#endif
