#include <iostream>
#include "manejo_memoria/MemoriaPrincipal.h"
#include "DEFINITIONS.h"
#include "manejo_memoria/leerTXT.h"
int main() {

    MemoriaPrincipal *mem = new MemoriaPrincipal();
    leerTXT *leerTXT1 = new leerTXT();
//    mem->esLibre();
//    mem->cargarBloque(1,"Hawaiana.txt");
//    std::cout << "fwefguaekgfesrfgsjgfejrsgfjsgfsjgsgksgjshkgsjhgjsgjkshgjks" << std::endl;
//    mem->cargarBloque(4,"JamonYQueso.txt");
//    mem->esLibre();
//
//    mem->leer(0);
//
//    mem->liberarBloque(0);
//    mem->esLibre();

    std::cout<<leerTXT1->cantLineasTXT("JamonYQueso.txt");
    return 0;
}