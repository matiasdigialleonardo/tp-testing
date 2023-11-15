#include <iostream>
#include <memory>
#include <drone.h>


using namespace std;

class ManejadorDrone
{
    public:
        ManejadorDrone();

        void set_drone(shared_ptr<Drone> drone);

        void manejar_drone();
        
    private:
        shared_ptr<Drone> _drone;
};