//
// Created by Josue Chaves on 10/9/18.
//

#ifndef TAREACORTA1_MEMORIAPRINCIPAL_H
#define TAREACORTA1_MEMORIAPRINCIPAL_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include "../DEFINITIONS.h"
#include "leerTXT.h"

struct BLOQUE{
    int* posInicio;
    int indice = 0;
    bool isLibre = true;
    std::string proceso;

};

class MemoriaPrincipal {

private:
    int* memoria;
    std::vector<BLOQUE> libres;
    leerTXT *leerDisco = new leerTXT();

public:

    MemoriaPrincipal();
    int esLibre();
    void cargarBloque(int proceso, std::string path);
    std::string liberarBloque(int indiceBloquememoria);
    std::string leer(int bloque);

};


#endif //TAREACORTA1_MEMORIAPRINCIPAL_H
