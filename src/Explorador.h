#ifndef EXPLORADOR_H
#define EXPLORADOR_H

#include <String>

using namespace std;

class Zona;

class Explorador
{


private:
    string nombre;
    int energia;
    int puntajeAmbiental;
    Zona* zonaAtual;

public:
    
    Explorador(string nombre);
    
    string getNombre() const;
    Zona* getZonaAtual() const;
    int getEnergia() const;
    int getPuntajeAmbiental() const;
    bool exploradorEstaagotado() const;
    
    void perdioEnergia(int cantidad);
    void recuperoEnergia(int cantidad);
    void ganaPuntajeAmbiental(int cantidad);
    
    void mover(Zona* nuevaZona);

};

#endif 