#include <iostream>
#include <string>
#include "PokemonAquatico.hpp"

// Método construtor
PokemonAquatico::PokemonAquatico(const std::string nome, const std::string tipo_ataque, const double forca_ataque, const double litros_jato)
: Pokemon(nome, tipo_ataque, forca_ataque), _litros_jato(litros_jato)
{
    std::cout << "Atributos inicializados" << std::endl;
}

// Método destrutor
PokemonAquatico::~PokemonAquatico(){
    std::cout << "Destruindo Pokemon Aquatico" << std::endl;
}

// Exibe o tipo de ataque feito pelo Pokemon adicionando comportamento ao método da classe base
void PokemonAquatico::falar_tipo_ataque()
{
    Pokemon::falar_tipo_ataque();
    std::cout << "Splash" << std::endl;
}

// Sobrescreve o método da classe pai calculando o dano específico do tipo de Pokemon por meio do método "ataque_aquatico"
double PokemonAquatico::calcular_dano()
{
    return this->ataque_aquatico();
}

// Retorna o valor do dano causado pelo ataque do Pokemon de acordo com os "_litros_jato" relacionados ao seu ataque
double PokemonAquatico::ataque_aquatico()
{
    return this->_forca_ataque + this->_litros_jato;
}