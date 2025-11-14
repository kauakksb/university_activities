#include <iostream>
#include <string>
#include "PokemonExplosivo.hpp"

// Método construtor
PokemonExplosivo::PokemonExplosivo(const std::string nome, const std::string tipo_ataque, const double forca_ataque, const double temperatura_explosao)
: Pokemon(nome, tipo_ataque, forca_ataque), _temperatura_explosao(temperatura_explosao)
{
    std::cout << "Atributos inicializados" << std::endl;
}

// Método destrutor
PokemonExplosivo::~PokemonExplosivo(){
    std::cout << "Destruindo Pokemon Eletrico" << std::endl;
}

void PokemonExplosivo::falar_tipo_ataque()
{
    Pokemon::falar_tipo_ataque();
    std::cout << "Boom!" << std::endl;
}

double PokemonExplosivo::calcular_dano()
{
    return this->ataque_explosivo();
}

double PokemonExplosivo::ataque_explosivo()
{
    return this->_forca_ataque / this->_temperatura_explosao;   
}