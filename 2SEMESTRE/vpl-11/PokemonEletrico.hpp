#ifndef POKEMON_ELETRICO
#define POKEMON_ELETRICO

#include <iostream>
#include <string>
#include "Pokemon.hpp"

class PokemonEletrico : public Pokemon
{
    private:
        double _potencia_raio;

    public:

        // Método construtor
        PokemonEletrico(const std::string nome, const std::string tipo_ataque, const double forca_ataque, const double potencia_raio);

        // Método destrutor
        ~PokemonEletrico();

        // Método expositivo
        void falar_tipo_ataque() override;

        // Métodos interativos
        double calcular_dano() override;

        double ataque_eletrico();
};      

#endif