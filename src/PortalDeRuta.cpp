#include <iostream>

#include "PortalDeRuta.h"
#include "Zona.h"
#include "Explorador.h"

using namespace std;

PortalDeRuta::PortalDeRuta(string nombre, Zona* destino) {

    this->nombre = nombre;
    this->destino = destino;
}

void PortalDeRuta::interactuar(Explorador* explorador) {

    explorador->mover(destino);

    cout << "Te moviste hacia la zona: "
         << destino->getNombre()
         << endl;
}

string PortalDeRuta::getNombre() const {

    return nombre;
}