#ifndef DADO_H
#define DADO_H

#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include "../utils/constantes.cc"

class Dado {
    private:
        int face;
        Cor cor;
    public:
        Dado(Cor cor){
            srand(time(0));
            this->cor = cor; 
            rolar();
        };
        void rolar(){
            face = rand() % FACES + 1;
        };
        void mostrarFace(){
            std::cout << face << std::endl; 
        };
        int getFace() const {
            return face;
        };
        void setCor(Cor novaCor) {
            cor = novaCor;
        }
        char getCor() const {
            return cor;
        }
    const static int FACES = 6; 

};
#endif