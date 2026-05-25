#ifndef RESIDUOCONTAMINANTE_H
#define RESIDUOCONTAMINANTE_H

#include "ElementoInteractivo.h"

class ResiduoContaminante : public ElementoInteractivo {

    private:
        string nombre;
        int energiaPerdida;
        int puntajeGanado;

    public:
        ResiduoContaminante(string nombre, int energiaPerdida, int puntajeGanado);

        void interactuar(Explorador* explorador) override;

        string getNombre() const override;

};

#endif