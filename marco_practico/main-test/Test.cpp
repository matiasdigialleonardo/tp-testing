#include "../ext/googletest/googletest/include/gtest/gtest.h"
#include "../drone_libraries/drone.h"

using namespace ::testing;
using namespace internal;

class DroneMethodsTests: public Test {
public:

    std::shared_ptr<Drone> drone;

    // Override SetUp method to use the drone object on all the tests of the DroneMethodsTests test suite.
	void SetUp() override
	{
    	auto drone = std::make_shared<Drone>();
	}

};

TEST_F(DroneMethodsTests, Despegar)
{

    CaptureStdout();  // Redirect cout for testing, the cout is captured in line 13.
    drone->despegar();
    std::string output = GetCapturedStdout();

    EXPECT_EQ(output, "El dron esta depegando.\n");
}

TEST_F(DroneMethodsTests, Aterrizar)
{

    CaptureStdout();
    drone->aterrizar();
    std::string output = GetCapturedStdout();

    EXPECT_EQ(output, "El dron esta aterrizando.\n");
}

TEST_F(DroneMethodsTests, Elevar)
{

    CaptureStdout();
    drone->elevar();
    std::string output = GetCapturedStdout();

    EXPECT_EQ(output, "El dron se esta elevando.\n");
}

TEST_F(DroneMethodsTests, Bajar)
{

    CaptureStdout();
    drone->bajar();
    std::string output = GetCapturedStdout();

    EXPECT_EQ(output, "El dron esta bajando.\n");
}

TEST_F(DroneMethodsTests, GirarDerecha)
{

    CaptureStdout();
    drone->girar_derecha();
    std::string output = GetCapturedStdout();

    EXPECT_EQ(output, "El dron esta girando hacia a la derecha.\n");
}

TEST_F(DroneMethodsTests, GirarIzquierda)
{

    CaptureStdout();
    drone->girar_izquierda();
    std::string output = GetCapturedStdout();

    EXPECT_EQ(output, "El dron esta girando hacia la izquierda.\n");
}

TEST_F(DroneMethodsTests, DescargarPaquete)
{

    CaptureStdout();
    drone->descargar_paquete();
    std::string output = GetCapturedStdout();

    EXPECT_EQ(output, "El dron esta descargando el paquete.\n");
}

TEST_F(DroneMethodsTests, SacarFotoRecepcion)
{

    CaptureStdout();
    drone->sacar_foto_recepcion();
    std::string output = GetCapturedStdout();

    EXPECT_EQ(output, "El dron esta sacando una foto de la recepcion.\n");
}

TEST_F(DroneMethodsTests, NotificarEntrega)
{

    CaptureStdout();
    drone->notificar_entrega();
    std::string output = GetCapturedStdout();

    EXPECT_EQ(output, "El dron esta notificando de la entrega.\n");
}