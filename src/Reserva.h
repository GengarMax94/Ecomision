#ifndef RESERVA_H
#define RESERVA_H

#include <string>
#include <unordered_map>
#include <iostream>

using namespace std;

class Zona;

class Reserva {

    private:
        unordered_map<string, Zona*> zonas;

    public:
        void agregarZona(string codigo, Zona* zona);
        Zona* buscarZona(string codigo);
        void mostrarZonas() const;

};

#endif