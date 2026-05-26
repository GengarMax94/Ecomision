#ifndef PORTALDERUTA_H
#define PORTALDERUTA_H

#include <string>

#include "ElementoInteractivo.h"

using namespace std;

class Zona;
class Explorador;

class PortalDeRuta : public ElementoInteractivo {

private:
    string nombre;
    Zona* destino;

public:

    PortalDeRuta(string nombre, Zona* destino);

    void interactuar(Explorador* explorador) override;

    string getNombre() const override;
};

#endif