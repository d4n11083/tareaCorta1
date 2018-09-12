//
// Created by Josue Chaves on 10/9/18.
//

#include "Pagina.h"

Pagina::Pagina(std::string pnombrePizza) {

    nombrePizza = pnombrePizza;
    cantidadProcesos = leerTXT1->cantLineasTXT(nombrePizza);
}

void Pagina::paginar() {

    for(int i =1;i <= cantidadProcesos; i++){
        paginas.push_back(leerTXT1->leerlineaTXT(i,nombrePizza));
    }

}
