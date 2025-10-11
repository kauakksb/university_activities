#include <iostream>
#include <string>
#include <iomanip>
#include "Banco.hpp"
#include "ContaBancaria.hpp"

int main()
{
    classBanco Banco;
    
    bool condicao = true;

    while(condicao)
    {
        char leitura;
        std::cin >> leitura;

        // std::cout << "Leitura: " << leitura << std::endl;
        int id;
        float valor;
        std::string nome;
        int dest;

        switch (leitura)
        {
        case 'C':
            // std::cout << "Caso C:" << std::endl;
            std::cin >> id;
            // std::cout << "id: " << id << std::endl;
            std::cin >> nome;
            // std::cout << "nome: " << nome << std::endl;

            if(Banco.pesquisa(id) != nullptr) std::cout << "ERRO: conta repetida" << std::endl;

            else
            {
                // std::cout << "Tentando criar conta";
                Banco.cria_conta(id, nome);
                std::cout << "conta criada" << std::endl;
            }
            break;
            
        
        case 'D':
            // std::cout << "Caso D:" << std::endl;
            std::cin >> id;
            // std::cout << "id: " << id << std::endl;
            std::cin >> valor;
            // std::cout << "Valor: " << valor << std::endl;

            if(Banco.pesquisa(id) == nullptr) std::cout << "ERRO: conta inexistente" << std::endl;

            else
            {
                classContaBancaria* conta = Banco.pesquisa(id);
                conta->deposita(valor);
                std::cout << "deposito efetuado" << std::endl;
            }
            break;

        case 'S':
            std::cin >> id;
            std::cin >> valor;

            if(Banco.pesquisa(id) == nullptr) std::cout << "ERRO: conta inexistente" << std::endl;

            else
            {
                classContaBancaria* conta = Banco.pesquisa(id);
                conta->saque(valor);
                std::cout << "saque efetuado" << std::endl;
            }
            break;

        case 'P':
            std::cin >> id;
            std::cin >> dest;
            std::cin >> valor;

            if((Banco.pesquisa(id) == nullptr) || (Banco.pesquisa(dest) == nullptr)) std::cout << "ERRO: conta inexistente" << std::endl;

            else
            {
                classContaBancaria* conta = Banco.pesquisa(id);
                conta->transferencia(Banco.pesquisa(dest), valor);
                std::cout << "pix efetuado" << std::endl;
            }
            break;

        case 'I':
            Banco.lista_contas();
            break;

        case 'T':
            condicao = false;
            break;

        default:
            break;
        }
    }
    return 0;
}