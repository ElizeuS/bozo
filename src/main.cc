#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include "entity/dado.cc"
#include "entity/jogador.cc"
#include "entity/banca.cc"

using namespace std;

int main(){
    Dado d1(BRANCO);
    d1.rolar();
    d1.mostrarFace();

    std::cout << (d1.getCor() == BRANCO) << std::endl; 


    Jogador j1("Everton");

    std::cout << j1.getSaldo() << std::endl;
    j1.saldar(90.5);
    std::cout << j1.getSaldo() << std::endl;

    Jogador j2("João");
    std::cout << j1.getID() << std::endl;
    std::cout << j2.getID() << std::endl;

    Banca banca("Banca1");
    Dado* dados = banca.rolarDados();
    for (int i=0;i <6; i++)
   
        std::cout << dados[i].getFace() << std::endl;

    return 0;
}
