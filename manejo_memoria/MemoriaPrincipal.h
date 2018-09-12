//
// Created by Josue Chaves on 10/9/18.
//

#ifndef TAREACORTA1_MEMORIAPRINCIPAL_H
#define TAREACORTA1_MEMORIAPRINCIPAL_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include "../DEFINITIONS.h"

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
public:

    MemoriaPrincipal();
    int esLibre();
    void cargarBloque(int tamanoBloque, int proceso);
    std::string liberarBloque(int indiceBloquememoria);

};


#endif //TAREACORTA1_MEMORIAPRINCIPAL_H
