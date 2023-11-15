#include <iostream>
#include "drone.h"

Drone::Drone() {};

void Drone::despegar()
{
    cout << "El dron esta depegando.\n";
}

void Drone::aterrizar()
{
    cout << "El dron esta aterrizando." << endl;
}

void Drone::elevar()
{
    cout << "El dron se esta elevando." << endl;
}

void Drone::bajar()
{
    cout << "El dron esta bajando." << endl;
}

void Drone::girar_derecha()
{
    cout << "El dron esta girando hacia a la derecha." << endl;
}

void Drone::girar_izquierda()
{
    cout << "El dron esta girando hacia la izquierda." << endl;
}

void Drone::descargar_paquete()
{
    cout << "El dron esta descargando el paquete." << endl;
}

void Drone::sacar_foto_recepcion()
{
    cout << "El dron esta sacando una foto de la recepcion." << endl;
}

void Drone::notificar_entrega()
{
    cout << "El dron esta notificando de la entrega." << endl;
}                      

