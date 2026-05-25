#include "Reserva.h"
#include "Zona.h"

void Reserva::agregarZona(string codigo, Zona* zona) {
    zonas[codigo] = zona;
}

Zona* Reserva::buscarZona(string codigo) {

    if (zonas.find(codigo) != zonas.end()) {
        return zonas[codigo];
    }

    return nullptr;
}

void Reserva::mostrarZonas() const {

    cout << "Zonas registradas:" << endl;

    for (auto zona : zonas) {
        cout << "- " << zona.first << " : " << zona.second->getNombre() << endl;
    }
}