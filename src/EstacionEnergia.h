#ifndef ESTACIONENERGIA_H
#define ESTACIONENERGIA_H

#include "ElementoInteractivo.h"

class EstacionEnergia : public ElementoInteractivo {

    private:
        string nombre;
        int energiaRecuperada;

    public:
        EstacionEnergia(string nombre, int energiaRecuperada);

        void interactuar(Explorador* explorador) override;

        string getNombre() const override;

};

#endif