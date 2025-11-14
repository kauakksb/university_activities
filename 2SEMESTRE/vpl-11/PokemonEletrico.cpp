#include <iostream>
#include <string>
#include "PokemonEletrico.hpp"

// Método construtor
PokemonEletrico::PokemonEletrico(const std::string nome, const std::string tipo_ataque, const double forca_ataque, const double potencia_raio)
: Pokemon(nome, tipo_ataque, forca_ataque) , _potencia_raio(potencia_raio)
{
    std::cout << "Atributos inicializados" << std::endl;  
} 

// Método destrutor
PokemonEletrico::~PokemonEletrico(){
    std::cout << "Destruindo Pokemon Eletrico" << std::endl;
}

// Exibe o tipo de ataque feito pelo Pokemon adicionando comportamento ao método da classe base
void PokemonEletrico::falar_tipo_ataque()
{
    Pokemon::falar_tipo_ataque();
    std::cout << "Bzzzz!" << std::endl;
}

// Sobrescreve o método da classe pai calculando o dano específico do tipo de Pokemon por meio do método "ataque_eletrico"
double PokemonEletrico::calcular_dano()
{
    return this->ataque_eletrico();
}

// Retorna o valor do dano causado pelo ataque do Pokemon de acordo com a "_potencia_raio" relacionada ao seu ataque
double PokemonEletrico::ataque_eletrico()
{
    return this->_forca_ataque * this->_potencia_raio;
}