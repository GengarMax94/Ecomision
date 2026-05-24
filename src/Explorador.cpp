#include "explorador.h"

Explorador::Explorador(string nombre){

    this->nombre = nombre;
    energia = 100;
    puntajeAmbiental = 0;
    zonaAtual = nullptr;
}

string Explorador::getNombre() const {
    return nombre;
}

Zona* Explorador::getZonaAtual() const {
    return zonaAtual;
}

int Explorador::getEnergia() const {
    return energia;
}

int Explorador::getPuntajeAmbiental() const {
    return puntajeAmbiental;
}

bool Explorador::exploradorEstaagotado() const   {
    return energia <= 0;
}

void Explorador::perdioEnergia(int cantidad) {
    energia -= cantidad;
    if (energia <0) {
        energia = 0;
    }
}

void Explorador::recuperoEnergia(int cantidad) {
    energia += cantidad;
    if (energia > 100) {
        energia = 100;
    }
}

void Explorador::ganaPuntajeAmbiental(int cantidad) {
    puntajeAmbiental += cantidad;
}

void Explorador::mover(Zona* nuevaZona) {
    zonaAtual = nuevaZona;
}
