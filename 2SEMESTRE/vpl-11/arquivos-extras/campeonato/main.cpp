// NÃO ALTERE ESSA LINHA
// #include "avaliacao_basica_pokemon.hpp"

#include <iostream>
#include <string>
#include <vector>

#include "Pokemon.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonEletrico.hpp"
#include "PokemonExplosivo.hpp"

int main() {

    //
    // Adicione seu código aqui e faça as demais alterações necessárias
    //

    std::vector<Pokemon*> pokemons;
    Pokemon * pokemon;

    int num_pokemons;
    std::cout << "Digite quantos pokemons criar: " << std::endl;
    std::cin >> num_pokemons;


    for(int i = 0; i < num_pokemons; i++)
    {
        char leitura;
        std::cout << "Digite o tipo do Pokemon (X = Explosivo, E = Eletrico, A = Aquatico):" << std::endl;
        std::cin >> leitura;

        switch (leitura)
        {
        case 'X':
            pokemon = new PokemonExplosivo("Charmander", "Chamas", 500, 3.3);
            pokemons.push_back(pokemon);
            break;
        
        case 'E':
            pokemon = new PokemonEletrico("Pikachu", "Relampago", 100, 1.2);
            pokemons.push_back(pokemon);
            break;

        case 'A':
            pokemon = new PokemonAquatico("Squirtle", "Bola de agua", 80, 40);
            pokemons.push_back(pokemon);
            break;
        default:
            break;
        }
    }

    for(Pokemon* pokemon_it: pokemons)
    {
        pokemon_it->imprimir_informacoes();
    }

    for(Pokemon* pokemon_it: pokemons)
    {
        delete pokemon_it;
    }

    pokemons.clear();

    return 0;
}