#ifndef POKEMON
#define POKEMON

#include <iostream>
#include <string>

class Pokemon
{
    protected:
        std::string _nome;
        std::string _tipo_ataque;
        double _forca_ataque;
        double energia = 100;


    public:
        // Método construtor
        Pokemon(const std::string nome, const std::string tipo_ataque, const double forca_ataque);

        // Método destrutor
        virtual ~Pokemon();

        // Métodos expositivos
        void falar_nome();
        
        virtual void falar_tipo_ataque();

        void imprimir_status();

        void imprimir_informacoes();

        // Métodos interativos
        virtual double calcular_dano() = 0;

        void atacar(Pokemon * outro_pokemon);

        void receber_dano(double valor_dano);

        // Métodos getter
        std::string get_nome();
};

#endif