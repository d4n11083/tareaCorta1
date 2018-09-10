#include <iostream>
#include "manejo_memoria/MemoriaPrincipal.h"
#include "DEFINITIONS.h"
int main() {
    MemoriaPrincipal *mem = new MemoriaPrincipal();

    std::cout << mem->esLibre()<< std::endl;
    return 0;
}