#include <iostream>
#include "manejo_memoria/MemoriaPrincipal.h"
#include "DEFINITIONS.h"
int main() {

    MemoriaPrincipal *mem = new MemoriaPrincipal();
    mem->esLibre();
    mem->cargarBloque(32000,1);
    mem->cargarBloque(12000,2);
    mem->esLibre();

    mem->liberarBloque(0);
    mem->esLibre();

    return 0;
}