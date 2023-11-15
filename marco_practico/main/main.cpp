#include <cstdlib>
#include <iostream>
#include "drone.h"
#include "manejador_drone.h"

using namespace std;

int main(int argc, char** argv)
{
    auto manejador_drone = make_unique<ManejadorDrone>();
    auto drone_IBag151 = make_shared<Drone>();

    manejador_drone->set_drone(drone_IBag151);

    manejador_drone->manejar_drone();

    return EXIT_SUCCESS;
}
