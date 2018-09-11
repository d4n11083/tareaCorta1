//
// Created by Josue Chaves on 10/9/18.
//

#include "MemoriaPrincipal.h"

MemoriaPrincipal::MemoriaPrincipal() {
    memoria = (int*)std::calloc(CantidadEnteros, sizeof(int));
    for (int i = 0; i < CantidadEnteros/50000; i++) {
        libres.push_back(&memoria[i*50000]);

    }
}

int MemoriaPrincipal::esLibre() {
    for (int i = 0; i < libres.size(); ++i) {
        if(*(libres[i]) == 0){
            std::cout <<"Hay campo en esta posición: "<<i << std::endl;
            return i;
        }
    }
    std::cout << "La memoria está llena " << std::endl;
    return -1;
}
