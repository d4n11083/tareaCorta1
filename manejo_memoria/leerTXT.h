//
// Created by Josue Chaves on 12/9/18.
//
#include <iostream>
#include <fstream>
#ifndef TAREACORTA1_LEERTXT_H
#define TAREACORTA1_LEERTXT_H
struct PAGINA{

};
class leerTXT{

private:

    std::ifstream archivoALeer;
    int proceso;
    int tamanoProceso;

public:


    leerTXT();
    int leerlineaTXT(int lineaLeer, std::string path);
    int cantLineasTXT(std::string path);
    void imprimirLineaTXT(int proceso, int tamanoProceso);

};
#endif //TAREACORTA1_LEERTXT_H
