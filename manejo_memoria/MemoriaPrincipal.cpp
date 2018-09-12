//
// Created by Josue Chaves on 10/9/18.
//

#include "MemoriaPrincipal.h"

MemoriaPrincipal::MemoriaPrincipal() {
    memoria = (int*)std::calloc(CantidadEnteros, sizeof(int));
    for (int i = 0; i < CantidadEnteros/TAMANO_PAGINA; i++) {

        BLOQUE t;
        t.posInicio = &memoria[i*TAMANO_PAGINA];
        t.indice = i;
        libres.push_back(t);
    }
}

int MemoriaPrincipal::esLibre() {
    for (int i = 0; i < libres.size(); ++i) {
        if(libres[i].isLibre ){
            std::cout <<"Hay campo en esta posición: "<< libres[i].indice << std::endl;
            return libres[i].indice;
        }
    }
    std::cout << "La memoria está llena " << std::endl;
    return -1;
}

void MemoriaPrincipal::cargarBloque(int tamanoBloque,int proceso) {
    int x = esLibre();
    libres[x].isLibre = false;
    if( x >= 0){
        for (int i = 0; i < tamanoBloque; ++i) {
            memoria[*libres[x].posInicio + i] = proceso;
        }
    }else{
        std::cout << "No hay espacio disponible para cargar en memoria";
    }
}

std::string MemoriaPrincipal::liberarBloque(int indiceBloqueMemoria) {

    if(libres[indiceBloqueMemoria].isLibre){
        return "libre";
    }else{
        int* ptrInicioBloqueMemoria = libres[indiceBloqueMemoria].posInicio;
        libres[indiceBloqueMemoria].isLibre = true;
        for (int i = 0; i < TAMANO_PAGINA; ++i) {
            memoria[*ptrInicioBloqueMemoria + i] = 0;
        }
        return "liberado";
    }
}