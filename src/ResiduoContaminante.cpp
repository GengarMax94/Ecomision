#include <iostream>

#include "ResiduoContaminante.h"
#include "Explorador.h"

using namespace std;

ResiduoContaminante::ResiduoContaminante(string nombre, int energiaPerdida, int puntajeGanado) {
    this->nombre = nombre;
    this->energiaPerdida = energiaPerdida;
    this->puntajeGanado = puntajeGanado;
}

void ResiduoContaminante::interactuar(Explorador* explorador) {

    explorador->perdioEnergia(energiaPerdida);
    explorador->ganaPuntajeAmbiental(puntajeGanado);

    cout << explorador->getNombre()
         << " limpió un residuo contaminante." << endl;

    cout << "Perdió "
         << energiaPerdida
         << " puntos de energía y ganó "
         << puntajeGanado
         << " puntos ambientales." << endl;
}

string ResiduoContaminante::getNombre() const {
    return nombre;
}