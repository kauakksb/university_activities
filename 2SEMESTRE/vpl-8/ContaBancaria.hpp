#ifndef CONTA_BANCARIA
#define CONTA_BANCARIA

#include <iostream>
#include <string>

class classContaBancaria{
    private:

    int id; // identificador de conta bancária
    std::string cliente; // nome do cliente
    float saldo; // saldo da conta

    public:

    // Método destrutor
    classContaBancaria(const int id, const std::string cliente);
    // Método destrutor
    ~classContaBancaria();
    
    // Deposita um valor na conta, incremetantdo o saldo
    void deposita(const float valor);

    // Realiza um saque na conta, debitando no saldo
    void saque(const float valor);

    // Realiza uma transferência para outra conta, desde que cadastrada no banco
    void transferencia(classContaBancaria* const conta, const float valor);

    // Imprime os dados da conta
    void imprime();

    // Retorna id da conta
    int get_id();
};

#endif