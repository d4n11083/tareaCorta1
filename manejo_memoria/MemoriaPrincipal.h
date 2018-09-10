//
// Created by Josue Chaves on 10/9/18.
//

#ifndef TAREACORTA1_MEMORIAPRINCIPAL_H
#define TAREACORTA1_MEMORIAPRINCIPAL_H

#include <iostream>
#include <cstdlib>
#include <list>
#include "../DEFINITIONS.h"

class MemoriaPrincipal {

private:
    int* memoria;

public:
    std::list<int*> libres;
    MemoriaPrincipal();
    bool esLibre();

};


#endif //TAREACORTA1_MEMORIAPRINCIPAL_H
