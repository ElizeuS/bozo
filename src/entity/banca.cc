#include "jogador.cc"
#include "dado.cc"
#include <string>

class Banca : public Jogador
{
private:
    Dado dados[6];

public:
    Banca(const std::string &nome) : Jogador(nome), dados{Dado(VERMELHO), Dado(BRANCO), Dado(BRANCO), Dado(BRANCO), Dado(BRANCO), Dado(BRANCO)} {};
    Dado *rolarDados() {
        for (int i = 0; i < sizeof(dados) / sizeof(dados[0]); i++)
        {
            dados[i].rolar();
        }
        return dados;
    };
};