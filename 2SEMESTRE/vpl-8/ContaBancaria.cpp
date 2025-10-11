#include <iostream>
#include <string>
#include <iomanip>
#include "ContaBancaria.hpp"

// Método construtor
classContaBancaria::classContaBancaria(const int id, const std::string cliente)
{
    this->id = id;
    this->cliente = cliente;   
    this->saldo = 0; 
}

// Método destrutor
classContaBancaria::~classContaBancaria()
{
    std::cout << "Conta Encerrada" << std::endl;
}

// Deposita um valor na conta, incremetantdo o saldo
void classContaBancaria::deposita(const float valor)
{
    this->saldo = this->saldo + valor; 
}

// Realiza um saque na conta, debitando no saldo
void classContaBancaria::saque(const float valor)
{
    if((this->saldo - valor) >= 0) this->saldo -= valor;
    
    else std::cout << "Saldo insuficiente" << std::endl;
}

// Realiza uma transferência para outra conta, desde que cadastrada no banco
void classContaBancaria::transferencia(classContaBancaria* const conta, const float valor)
{
    if((this->saldo - valor) >= 0)
    {
        this->saldo -= valor;
        conta->saldo += valor;
    }
    else std::cout << "Saldo insuficiente" << std::endl;
}

// Imprime os dados da conta
void classContaBancaria::imprime()
{
    std::cout << this->id << " ";
    std::cout << this->cliente << " ";
    std::cout << std::fixed << std::setprecision(2) << this->saldo << std::endl;
}

// Retorna o id de conta bancária
int classContaBancaria::get_id()
{
    return this->id;
}