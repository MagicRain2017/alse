#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
using namespace std;

class Vehiculo {
protected:
    string marca;
    string modelo;
    string placa;
    bool disponible;

public:
    Vehiculo(string m, string mod, string p);
    virtual ~Vehiculo();
    virtual void mostrarInformacion();
    bool estaDisponible();
    void alquilar();
    void devolver();
    string getPlaca();
};

#endif
