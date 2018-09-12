cmake_minimum_required(VERSION 3.12)
project(tareaCorta1)

set(CMAKE_CXX_STANDARD 14)

add_executable(tareaCorta1 main.cpp manejo_memoria/MemoriaPrincipal.cpp manejo_memoria/MemoriaPrincipal.h manejo_memoria/Pagina.cpp manejo_memoria/Pagina.h manejo_memoria/UnidadManejoMemoria.cpp manejo_memoria/UnidadManejoMemoria.h DEFINITIONS.h manejo_memoria/leerTXT.h manejo_memoria/leerTXT.cpp)