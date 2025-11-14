#ifndef POKEMON_EXPLOSIVO
#define POKEMON_EXPLOSIVO

#include <iostream>
#include <string>
#include "Pokemon.hpp"

class PokemonExplosivo : public Pokemon
{
    private:
        double _temperatura_explosao;

    public:
        // Método construtor
        PokemonExplosivo(const std::string nome, const std::string tipo_ataque, const double forca_ataque, const double temperatura_explosao);

        // Método destrutor
        ~PokemonExplosivo();

        // Método expositivo
        void falar_tipo_ataque() override;

        // Métodos interativos
        double calcular_dano() override;

        double ataque_explosivo();
};

#endif