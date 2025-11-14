#ifndef CAMPEONATO
#define CAMPEONATO
#include <iostream>
#include <string>
#include <vector>
#include "Pokemon.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonEletrico.hpp"
#include "PokemonExplosivo.hpp"
#include "Treinador.hpp"

class Campeonato
{
    private:
        std::vector<Treinador*> _treinadores;

    public:
        // Método construtor
        Campeonato();

        // Método destrutor
        ~Campeonato();

        // Cadas
        void cadastrar_treinador(std::string nome);

        void cadastrar_pokemon_eletrico(const int idt, const std::string nome, const std::string tipo_ataque, const double forca_ataque, const double potencia_raio);

        void cadastrar_pokemon_aquatico(const int idt, const std::string nome, const std::string tipo_ataque, const double forca_ataque, const double litros_jato);

        void cadastrar_pokemon_explosivo(const int idt, const std::string nome, const std::string tipo_ataque, const double forca_ataque, const double temperatura_explosao);

        void imprimir_informacoes_treinador(const int idt);

        void executar_batalha(int idt1, int idpk1, int idt2, int idpk2);
};

#endif