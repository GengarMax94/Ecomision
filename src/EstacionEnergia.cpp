#include <iostream>

#include "EstacionEnergia.h"
#include "Explorador.h"

using namespace std;

EstacionEnergia::EstacionEnergia(string nombre, int energiaRecuperada) {
    this->nombre = nombre;
    this->energiaRecuperada = energiaRecuperada;
}

void EstacionEnergia::interactuar(Explorador* explorador) {

    explorador->recuperoEnergia(energiaRecuperada);

    cout << explorador->getNombre()
         << " recuperó "
         << energiaRecuperada
         << " puntos de energía." << endl;
}

string EstacionEnergia::getNombre() const {
    return nombre;
}