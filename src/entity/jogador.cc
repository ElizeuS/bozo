#ifndef JOGADOR_H
#define JOGADOR_H

#include <string>

class Jogador {
    private:
        //Variável para indicar o ID da próxima instancia
        static int proximoID;
        int id;
        double saldo;
        std::string nome;

    public:
        Jogador(const std::string& nome){
            //Após a atribuiução incrementa o valor do ID
            this->id = proximoID++;
            this->nome = nome;
            this->saldo = 0;
        }
        int getID() const {return id; }
        std::string getNome() const {return nome; }
        void setNome(const std::string& nome) {this->nome=nome; }
        double getSaldo() const {return saldo; }
        void saldar(double valor){ this->saldo += valor; }
        void debitar(int valor){ this->saldo -= valor; }
};

// Inicializa a variável estática
int Jogador::proximoID = 1;
#endif