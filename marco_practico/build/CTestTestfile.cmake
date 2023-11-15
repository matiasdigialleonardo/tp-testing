# CMake generated Testfile for 
# Source directory: D:/Analisis_de_Sistemas/Segundo_anio/Algoritmos_y_Estructuras_de_Datos_2/TP_TESTING/marco_practico
# Build directory: D:/Analisis_de_Sistemas/Segundo_anio/Algoritmos_y_Estructuras_de_Datos_2/TP_TESTING/marco_practico/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(UnitTests "runUnitTests")
set_tests_properties(UnitTests PROPERTIES  _BACKTRACE_TRIPLES "D:/Analisis_de_Sistemas/Segundo_anio/Algoritmos_y_Estructuras_de_Datos_2/TP_TESTING/marco_practico/CMakeLists.txt;20;add_test;D:/Analisis_de_Sistemas/Segundo_anio/Algoritmos_y_Estructuras_de_Datos_2/TP_TESTING/marco_practico/CMakeLists.txt;0;")
subdirs("drone_libraries")
subdirs("main")
subdirs("ext/googletest")
