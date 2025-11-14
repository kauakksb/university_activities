#ifndef POKEMON_AQUATICO
#define POKEMON_AQUATICO

#include <iostream>
#include <string>
#include "Pokemon.hpp"

class PokemonAquatico : public Pokemon
{
    private:
        double _litros_jato;

    public:

        // Método construtor
        PokemonAquatico(const std::string nome, const std::string tipo_ataque, const double forca_ataque, const double litros_jato);

        // Método destrutor
        ~PokemonAquatico();

        // Método expositivo
        void falar_tipo_ataque() override;

        // Métodos interativos
        double calcular_dano() override;

        double ataque_aquatico();
};

#endif