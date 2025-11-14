#include "Treinador.hpp"
#include "PokemonEletrico.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonExplosivo.hpp"

#include <iostream>

// Método construtor
Treinador::Treinador(std::string nome) : _nome(nome) {}

// Método destrutor
Treinador::~Treinador() {
    for (Pokemon* p : this->_pokemons) {
        delete p;
    }
}

//cadastros
void Treinador::cadastrar_pokemon_eletrico(std::string nome, std::string tipo_ataque, 
                                            double forca_ataque, double potencia_raio) {

    Pokemon* novoPokemon = new PokemonEletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
    _pokemons.push_back(novoPokemon);
}

void Treinador::cadastrar_pokemon_aquatico(std::string nome, std::string tipo_ataque, 
                                            double forca_ataque, double litros_jato) {

    Pokemon* novoPokemon = new PokemonAquatico(nome, tipo_ataque, forca_ataque, litros_jato);
    _pokemons.push_back(novoPokemon);
}

void Treinador::cadastrar_pokemon_explosivo(std::string nome, std::string tipo_ataque, 
                                            double forca_ataque, double temperatura_explosao) {

    Pokemon* novoPokemon = new PokemonExplosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
    _pokemons.push_back(novoPokemon);
}

//usar
Pokemon* Treinador::usar_pokemon(int i) {
    return _pokemons[i];
}

//imprimir
void Treinador::imprimir_informacoes() {
    
    if(_pokemons.empty()) {
        std::cout << "Nome: " << _nome << std::endl;
        std::cout << "----------" << std::endl;
        std::cout << "Nenhum Pokemon cadastrado" << std::endl;
        std::cout << "----------" << std::endl;
    } else {
        std::cout << "Nome: " << _nome << std::endl;
        std::cout << "----------" << std::endl;

        for (Pokemon* p : _pokemons) {
            p->imprimir_informacoes();
            std::cout << "----------" << std::endl;
        }
    }
}

//getter
std::string Treinador::getNome() const {
    return _nome;
}