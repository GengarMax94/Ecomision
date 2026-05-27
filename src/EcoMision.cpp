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
    Zona* laboratorio = new Zona("Laboratorio", "laboratorio");
    Zona* vivero = new Zona("Vivero","vivero");
    Zona* montana = new Zona("Montana","montana");

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

    rio->agregarElemento(
        new PortalDeRuta(
            "Portal al Laboratorio",
            laboratorio
        )
    );

    laboratorio->agregarElemento(
        new EstacionEnergia(
            "Panel Experimental",
            20
        )
    );

    laboratorio->agregarElemento(
        new ResiduoContaminante(
            "Desecho Quimico",
            10,
            20
        )
    );

    laboratorio->agregarElemento(
        new PortalDeRuta(
            "Portal al Vivero",
            vivero
        )
    );

    vivero->agregarElemento(
        new AnimalHerido(15)
    );

    vivero->agregarElemento(
        new EstacionEnergia(
            "Zona de Descanso",
            15
        )
    );

    vivero->agregarElemento(
        new PortalDeRuta(
            "Portal a la Montana",
            montana
        )
    );

    montana->agregarElemento(
        new ResiduoContaminante(
            "Basura en Sendero",
            20,
            30
        )
    );

    montana->agregarElemento(
        new AnimalHerido(10)
    );

    montana->agregarElemento(
        new PortalDeRuta(
            "Portal al Bosque",
            bosque
        )
    );


    reserva.agregarZona("bosque", bosque);
    reserva.agregarZona("rio", rio);
    reserva.agregarZona("laboratorio",laboratorio);
    reserva.agregarZona("vivero",vivero);
    reserva.agregarZona("montana",montana);

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
        if (explorador->getPuntajeAmbiental() >= 120) {
            cout << endl;
            cout << "La reserva ha sido restaurada"
            << endl;
        break;
    }           
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