#include <iostream>
#include <string>
#include <vector>
#include "Banco.hpp"
#include "ContaBancaria.hpp"

// Método construtor
classBanco::classBanco()
{
    this->num_contas = 0;
    for(int i = 0; i < 20; i++)
    {
        this->contas[i] = nullptr;
    }
}

// Método destrutor
classBanco::~classBanco()
{
    for(int i = 0; i < num_contas; i++)
    {
        delete this->contas[i];
    }
    std::cout << "Instância de banco encerrada" << std::endl;
}

// Cria uma instância de conta bancária
classContaBancaria* classBanco::cria_conta(const int id, const std::string nome)
{
    if(this->pesquisa(id) != nullptr) return nullptr;

    else
    {
        classContaBancaria* conta = new classContaBancaria(id, nome);
        this->contas[num_contas] = conta;
        num_contas++;
        
        return conta;
    }
}

// Realiza uma pesquisa por uma conta bancária no vetor de contas
classContaBancaria* classBanco::pesquisa(const int id)
{
    if(this->num_contas > 0)
    {
        for(int i = 0; i < num_contas; i++)
        {
            if(this->contas[i]->get_id() == id)
            {
                return this->contas[i];
            }
        }
    }
    return nullptr;
}

// Lista todas as informações de todas as contas cadastradas no banco
void classBanco::lista_contas()
{
    for(int i = 0; i < num_contas; i++)
    {
        this->contas[i]->imprime();
    }
}