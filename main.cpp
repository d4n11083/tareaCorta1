#include <iostream>
#include "manejo_memoria/MemoriaPrincipal.h"
#include "DEFINITIONS.h"
#include "manejo_memoria/leerTXT.h"
int main() {

    MemoriaPrincipal *mem = new MemoriaPrincipal();
    leerTXT *leerTXT1 = new leerTXT("Hawaiana.txt");
    mem->esLibre();
    mem->cargarBloque(32000,1);
    mem->cargarBloque(12000,2);
    mem->esLibre();

    mem->liberarBloque(0);
    mem->esLibre();

    leerTXT1->leerlineaTXT(4);
    return 0;
}