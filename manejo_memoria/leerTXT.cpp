//
// Created by Josue Chaves on 12/9/18.
//

#include "leerTXT.h"

leerTXT::leerTXT(std::string path) {

    archivoALeer.open("/Users/josuechaves/ClionProjects/tareaCorta1/pizzas/" + path);
    if(!archivoALeer.is_open()){
        std::cout<< "No se pudo abrir el archivo"<<std::endl;
        exit(EXIT_FAILURE);
    }

}
void leerTXT::imprimirLineaTXT(int proceso, int tamanoProceso) {

    std::cout << "Proceso: " << proceso << "\tTamano del proceso: " << tamanoProceso<< std::endl;

}
int leerTXT::leerlineaTXT(int lineaLeer) {

    while(archivoALeer>>proceso >> tamanoProceso){
        if(proceso == lineaLeer){
            imprimirLineaTXT(proceso,tamanoProceso);
            break;
        }
    }

}