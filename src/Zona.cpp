#include <iostream>

#include "zona.h"
#include "explorador.h"
#include "ElementoInteractivo.h"

using namespace std;

Zona::Zona(string nombre, string codigo) {
    this->nombre = nombre;
    this->codigo = codigo;
}

string Zona::getNombre() const {
    return nombre;
}

string Zona::getCodigo() const {
    return codigo;
}

void Zona::agregarElemento(ElementoInteractivo* elemento) {
    elementos.push_back(elemento);
}

void Zona::mostrarElementos() const {
    cout << "Elementos en la zona " << nombre << ":" << endl;
    for (int i = 0; i < elementos.size(); i++) {
        cout << i + 1 << ". " << elementos[i]->getNombre() << endl;
    }
}

void Zona::interactuarConElementos(int indice, Explorador* explorador) {
    if (indice > 0 && indice <= elementos.size()) {
        elementos[indice - 1]->interactuar(explorador);
        if (elementos[indice - 1]->getNombre() == "Animal Herido"
        || elementos[indice - 1]->getNombre() == "Basura toxica") {
            delete elementos[indice - 1];
            elementos.erase(elementos.begin() + indice - 1);
        }
    } else {
        cout << "Índice inválido." << endl;
    }
}

void Zona::interactuarConElementos(string nombre, Explorador* explorador) {
    for (ElementoInteractivo* elemento : elementos) {
        if (elemento->getNombre() == nombre) {
            elemento->interactuar(explorador);
        }
    }
    cout << "Elemento no encontrado." << endl;
}
