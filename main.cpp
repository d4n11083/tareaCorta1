#include <iostream>
#include "manejo_memoria/MemoriaPrincipal.h"
#include "DEFINITIONS.h"
int main() {
    MemoriaPrincipal *mem = new MemoriaPrincipal();
    int x = 1;
    *(mem->libres[0]) = 1;
    *(mem->libres[1]) = 1;
    *(mem->libres[2]) = 1;
    *(mem->libres[3]) = 1;
    *(mem->libres[4]) = 1;


    std::cout << mem->esLibre()<< std::endl;
    return 0;
}