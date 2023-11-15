#include <manejador_drone.h>

ManejadorDrone::ManejadorDrone() {};

void ManejadorDrone::set_drone(shared_ptr<Drone> drone)
{
    _drone = drone;
};

void ManejadorDrone::manejar_drone()
{
        int opcion = 0;
        do
        {
            cout << "Seleccione una opcion:" << endl;
            cout << "1. Despegar" << endl;
            cout << "2. Aterrizar" << endl;
            cout << "3. Elevar" << endl;
            cout << "4. Bajar" << endl;
            cout << "5. Girar a la derecha" << endl;
            cout << "6. Girar a la izquierda" << endl;
            cout << "7. Descargar paquete" << endl;
            cout << "8. Sacar foto de la recepcion" << endl;
            cout << "9. Notificar entrega" << endl;
            cout << "0. Salir" << endl;
            cout << "Ingrese el numero de la opcion: ";
            cin >> opcion;
            cout << endl;

            switch (opcion)
            {
            case 1:
                _drone->despegar();
                break;
            case 2:
                _drone->aterrizar();
                break;
            case 3:
                _drone->elevar();
                break;
            case 4:
                _drone->bajar();
                break;
            case 5:
                _drone->girar_derecha();
                break;
            case 6:
                _drone->girar_izquierda();
                break;
            case 7:
                _drone->descargar_paquete();
                break;
            case 8:
                _drone->sacar_foto_recepcion();
                break;
            case 9:
                _drone->notificar_entrega();
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
                break;
            }

            cout << endl;
        } while (opcion != 0);
}