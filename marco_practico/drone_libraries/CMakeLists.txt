add_library(drone_libraries drone.cpp manejador_drone.cpp)

target_include_directories(drone_libraries PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
