#include <iostream>

#include "EcoMision.h"
#include "Zona.h"
#include "AnimalHerido.h"
#include "ResiduoContaminante.h"
#include "EstacionEnergia.h"
#include "PortalDeRuta.h"

using namespace std;

EcoMision::EcoMision() {

    explorador = new Explorador("Jugador");

    Zona* bosque = new Zona("Bosque", "bosque");
    Zona* rio = new Zona("Rio", "rio");

    bosque->agregarElemento(
        new AnimalHerido(20)
    );

    bosque->agregarElemento(
        new ResiduoContaminante(
            "Basura toxica",
            15,
            25
        )
    );

    bosque->agregarElemento(
        new PortalDeRuta(
            "Portal al Rio",
            rio
        )
    );

    rio->agregarElemento(
        new EstacionEnergia(
            "Estacion Solar",
            30
        )
    );

    rio->agregarElemento(
        new PortalDeRuta(
            "Portal al Bosque",
            bosque
        )
    );

    reserva.agregarZona("bosque", bosque);
    reserva.agregarZona("rio", rio);

    explorador->mover(bosque);
}

void EcoMision::mostrarMenu() {

    int opcion;

    do {

        cout << endl;
        cout << "===== ECOMISION ====="
             << endl;

        cout << "Zona actual: "
             << explorador->getZonaAtual()->getNombre()
             << endl;

        cout << "Energia: "
             << explorador->getEnergia()
             << endl;

        cout << "Puntaje ambiental: "
             << explorador->getPuntajeAmbiental()
             << endl;

        cout << endl;

        explorador->getZonaAtual()
                   ->mostrarElementos();

        cout << endl;

        cout << "Seleccione un elemento: ";
        cin >> opcion;

        explorador->getZonaAtual()
                   ->interactuarConElementos(
                        opcion,
                        explorador
                   );

    } while (!explorador->exploradorEstaagotado());
}

void EcoMision::iniciarJuego() {

    cout << "Bienvenido a EcoMision"
         << endl;

    mostrarMenu();

    cout << endl;

    cout << "Juego terminado"
         << endl;
}