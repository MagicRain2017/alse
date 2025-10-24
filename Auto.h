#ifndef AUTO_H
#define AUTO_H

#include "Vehiculo.h"

class Auto : public Vehiculo {
private:
    int capacidadPasajeros;

public:
    Auto(string m, string mod, string p, int cap);
    void mostrarInformacion() override;
};

#endif
