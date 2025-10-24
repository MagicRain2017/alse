#ifndef BICICLETA_H
#define BICICLETA_H

#include "Vehiculo.h"

class Bicicleta : public Vehiculo {
private:
    string tipo;

public:
    Bicicleta(string m, string mod, string p, string t);
    void mostrarInformacion() override;
};

#endif
