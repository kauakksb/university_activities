#include <iostream>
#include <string>
#include "Pokemon.hpp"

// Método construtor
Pokemon::Pokemon(const std::string nome, const std::string tipo_ataque, const double forca_ataque)
: _nome(nome), _tipo_ataque(tipo_ataque), _forca_ataque(forca_ataque)
{
    std::cout << "atributos inicializados" << std::endl;
}

// Método destrutor virtual
Pokemon::~Pokemon(){
    std::cout << "Pokemon destruido" << std::endl;
}

// Fala o nome do Pokemon
void Pokemon::falar_nome()
{
    std::cout << this->_nome << "!" << std::endl;
}

// Fala o tipo de ataque do Pokemon
void Pokemon::falar_tipo_ataque()
{
    std::cout << this->_tipo_ataque << "!" << std::endl;
}

// Imprime o nome e a energia do Pokemon
void Pokemon::imprimir_status()
{
    std::cout << this->_nome << "!" << std::endl;
    std::cout << "Energia: " << this->energia << std::endl;
}

// Imprime todas as informações do Pokemon
void Pokemon::imprimir_informacoes()
{
    std::cout << "Pokemon: " << this->_nome << std::endl;
    std::cout << "Tipo ataque: " << this->_tipo_ataque << std::endl;
    std::cout << "Dano: " << this->_forca_ataque << std::endl;
    std::cout << "Energia: " << this->energia << std::endl;
}

void Pokemon::atacar(Pokemon * outro_pokemon)
{   
    double dano = this->calcular_dano();

    // Fala o próprio nome e o tipo de ataque
    this->falar_nome();
    this->falar_tipo_ataque();

    // Imprime o dano calculado
    std::cout << "Dano: " << dano << std::endl;

    // Aplicando o dano sobre o outro pokemon
    outro_pokemon->receber_dano(dano);
}

void Pokemon::receber_dano(double valor_dano)
{
    if((this->energia - valor_dano) > 0) this->energia -= valor_dano;

    else
    {
        this->energia = 0;
        std::cout << this->_nome << "morreu!" << std::endl;
    }
}

std::string Pokemon::get_nome()
{
    return this->_nome;
}