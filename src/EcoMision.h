#ifndef ECOMISION_H
#define ECOMISION_H

#include "Reserva.h"
#include "Explorador.h"

class EcoMision {

private:

    Reserva reserva;

    Explorador* explorador;

public:

    EcoMision();

    void iniciarJuego();

    void mostrarMenu();
};

#endif