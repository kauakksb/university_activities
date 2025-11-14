#include <iostream>
#include <string>
#include <vector>
#include "Campeonato.hpp"

// Método construtor
Campeonato::Campeonato(){}

// Método destrutor
Campeonato::~Campeonato()
{
    // Desaloca instâncias de treinadores se o vetor não estiver vazio
    if(!(this->_treinadores.empty()))
    {
        for(Treinador* t: this->_treinadores)
        {
            delete t;
        }
        this->_treinadores.clear();
    }
}

// Cadastra um treinador
void Campeonato::cadastrar_treinador(std::string nome)
{
    // Aloca uma instância de treinador e armazena no vetor de treinadores
    Treinador* treinador = new Treinador(nome);
    this->_treinadores.push_back(treinador);
}

// Cadastra pokemon elétrico
void Campeonato::cadastrar_pokemon_eletrico(const int idt, const std::string nome, 
    const std::string tipo_ataque, const double forca_ataque, const double potencia_raio) 
{
    // Armazena um ponteiro do treinador a partir de seu id e então cadastra o pokemon
    Treinador* treinador = this->_treinadores.at(idt);
    treinador->cadastrar_pokemon_eletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
}

// Cadastra pokemon aquático
void Campeonato::cadastrar_pokemon_aquatico(const int idt, const std::string nome, 
    const std::string tipo_ataque, const double forca_ataque, const double litros_jato)
{
    // Armazena um ponteiro do treinador a partir de seu id e então cadastra o pokemon
    Treinador* treinador = this->_treinadores.at(idt);
    treinador->cadastrar_pokemon_aquatico(nome, tipo_ataque, forca_ataque, litros_jato);
}

// Cadastra pokemon explosivo
void Campeonato::cadastrar_pokemon_explosivo(const int idt, const std::string nome, 
    const std::string tipo_ataque, const double forca_ataque, const double temperatura_explosao)
{
    // Armazena um ponteiro do treinador a partir de seu id e então cadastra o pokemon
    Treinador* treinador = this->_treinadores.at(idt);
    treinador->cadastrar_pokemon_explosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
}

void Campeonato::imprimir_informacoes_treinador(const int idt)
{
    // Armazena um ponteiro do treinador a partir de seu id e então imprime suas informações
    Treinador* treinador = this->_treinadores.at(idt);
    treinador->imprimir_informacoes();
}

void Campeonato::executar_batalha(int idt1, int idpk1, int idt2, int idpk2)
{
    Treinador* treinador1 = this->_treinadores.at(idt1);
    Treinador* treinador2 = this->_treinadores.at(idt2);

    Pokemon* pokemon1 = treinador1->usar_pokemon(idpk1);
    Pokemon* pokemon2 = treinador2->usar_pokemon(idpk2);

    std::cout << "### Batalha ###" << std::endl;
    std::cout << treinador1->getNome() << " " << pokemon1->get_nome() << " vs. " << treinador2->getNome() << " " << pokemon2->get_nome() <<std::endl;
    
    pokemon1->atacar(pokemon2);
    pokemon2->imprimir_status();
}