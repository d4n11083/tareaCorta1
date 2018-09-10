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

bool MemoriaPrincipal::esLibre() {
    for (int i = 0; i < libres.size(); ++i) {
        if(*(libres.front()+i) == 0){
            std::cout <<"Esta vacia" << std::endl;
            return true;
        }
    }
    std::cout <<"Esta llena" << std::endl;
    return false; //Retorna False si no hay espacio disponible en memoria.
}
