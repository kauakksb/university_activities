//Dupla: Kaua Soares Batista e Otavio Oliveira de Paula
#include <iostream>
#include <string>
#include <vector>
#include "Campeonato.hpp"
#include "avaliacao_basica_pokemon.hpp" 

using namespace std;

int main() {

    Campeonato campeonato;
    char comando;

    while (cin >> comando) {

        switch (comando) {

            //cadastrar treinador
            case 't': {
                string nome;
                cin >> nome;
                campeonato.cadastrar_treinador(nome);
                break;
            }

            // informacoes treinador
            case 'i': {
                int idt;
                cin >> idt;
                campeonato.imprimir_informacoes_treinador(idt);
                break;
            }

            //cadastrar eletrico
            case 'e': {
                int idt;
                string nome; 
                string tipo_ataque;
                double forca_ataque;
                double potencia_raio;
                cin >> idt >> nome >> tipo_ataque >> forca_ataque >> potencia_raio;
                campeonato.cadastrar_pokemon_eletrico(idt, nome, tipo_ataque, forca_ataque, potencia_raio);
                break;
            }

            //cadastrar aquatico
            case 'q': {
                int idt;
                string nome; 
                string tipo_ataque;
                double forca_ataque;
                double litros_jato;
                cin >> idt >> nome >> tipo_ataque >> forca_ataque >> litros_jato;
                campeonato.cadastrar_pokemon_aquatico(idt, nome, tipo_ataque, forca_ataque, litros_jato);
                break;
            }

            //cadastrar explosivo
            case 'x': {
                int idt;
                string nome;
                string tipo_ataque;
                double forca_ataque; 
                double temperatura_explosao;
                cin >> idt >> nome >> tipo_ataque >> forca_ataque >> temperatura_explosao;
                campeonato.cadastrar_pokemon_explosivo(idt, nome, tipo_ataque, forca_ataque, temperatura_explosao);
                break;
            }

            //batalha
            case 'h': {
                int idt1, idpk1, idt2, idpk2;
                cin >> idt1 >> idpk1 >> idt2 >> idpk2;
                campeonato.executar_batalha(idt1, idpk1, idt2, idpk2);
                break;
            }

            //avaliacao basica
            case 'b': {
                avaliacao_basica();
                break;
            }

            default: {
                break;
            }

        } 
    }

    return 0;
}