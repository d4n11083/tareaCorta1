//
// Created by Josue Chaves on 10/9/18.
//
#include <iostream>
#include <vector>
#include "../DEFINITIONS.h"
#include "leerTXT.h"
#ifndef TAREACORTA1_PAGINA_H
#define TAREACORTA1_PAGINA_H

class Pagina {
private:
    leerTXT *leerTXT1 = new leerTXT();
    std::string nombrePizza;
    int procesoEjecucion = 0;
    int cantidadProcesos;
    std::vector<int> paginas;

public:


    Pagina(std::string pnombrePizza);
    void paginar();

    void setProcesoEjecucion(){
        cantidadProcesos++;
    }
    int getProcesoEjecucion(){
        return procesoEjecucion;
    }
    int getCantidadProcesos(){
        return cantidadProcesos;
    }

    int getCantidadInstrucciones(int proceso){
        return paginas[proceso];
    }


};


#endif //TAREACORTA1_PAGINA_H
