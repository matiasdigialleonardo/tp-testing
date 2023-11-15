#ifndef DRONE_H
#define DRONE_H

#pragma once

#include <iostream>
#include <memory>

using namespace std;



class Drone
{
    public:
        Drone();

        void despegar();
        void aterrizar();
        void elevar();
        void bajar();
        void girar_derecha();
        void girar_izquierda();
        void descargar_paquete();
        void sacar_foto_recepcion();
        void notificar_entrega();                   
};

#endif