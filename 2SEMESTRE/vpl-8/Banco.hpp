#ifndef BANCO
#define BANCO

#include <iostream>

#include <string>
#include <vector>
#include "ContaBancaria.hpp"

class classBanco
{
    private:

    int num_contas; // Número de contas associadas ao banco
    classContaBancaria* contas[20]; // Vetor com apontadores para cada conta

    public:
    // Método construtor
    classBanco();
    // Método destrutor
    ~classBanco();

    // Cria uma conta bancária passando o id e o nome do cliente
    classContaBancaria* cria_conta(const int id, const std::string nome);

    // Pesquisa por uma conta bancária no vetor de contas por meio do id 
    classContaBancaria* pesquisa(const int id);

    // Lista as informações de todas as contas bancárias 
    void lista_contas();

};

#endif