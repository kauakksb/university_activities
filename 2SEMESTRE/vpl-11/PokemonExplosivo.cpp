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

// Exibe o tipo de ataque feito pelo Pokemon adicionando comportamento ao método da classe base
void PokemonExplosivo::falar_tipo_ataque()
{
    Pokemon::falar_tipo_ataque();
    std::cout << "Boom!" << std::endl;
}

// Sobrescreve o método da classe pai calculando o dano específico do tipo de Pokemon por meio do método "ataque_explosivo"
double PokemonExplosivo::calcular_dano()
{
    return this->ataque_explosivo();
}

// Retorna o valor do dano causado pelo ataque do Pokemon de acordo com a "_temperatura_explosao" relacionada ao seu ataque
double PokemonExplosivo::ataque_explosivo()
{
    return this->_forca_ataque / this->_temperatura_explosao;   
}