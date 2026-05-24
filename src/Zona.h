#ifndef ZONA_H
#define ZONA_H

#include <String>
#include <vector>

using namespace std;

class ElementoInteractivo;

class Explorador;

class Zona{

    private:
        string nombre;
        string codigo;
        
        vector<ElementoInteractivo*> elementos;

    public:
        
        Zona(string nombre, string codigo);
        
        string getNombre() const;
        string getCodigo() const;

        void agregarElemento(ElementoInteractivo* elemento);
        void mostrarElementos() const;
        void interactuarConElementos(int indice, Explorador* explorador );
        void interactuarConElementos(string nombre, Explorador* explorador);
        
};



#endif