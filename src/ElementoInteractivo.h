#ifndef ELEMENTOINTERACTIVO_H
#define ELEMENTOINTERACTIVO_H

#include <string>
using namespace std;

class Explorador;

class ElementoInteractivo{

    public:
        virtual void interactuar(Explorador* explorador) = 0; 
        virtual ~ElementoInteractivo();
        virtual string getNombre() const = 0;

};








#endif