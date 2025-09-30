#include <iostream>
#include "carro.hpp"

// Inicializando atributo de classe
int ClassCarro::num_carros = 0;
int ClassCarro::last_id = 0;

// Método construtor sem parâmetros
ClassCarro::ClassCarro()
{
    if(ClassCarro::num_carros == 0)
    {
        this->id = 1;
        ClassCarro::last_id = this->id;
    }
    else
    {
        this->id = ClassCarro::last_id + 1;
        ClassCarro::last_id = this->id;
    }
    ClassCarro::num_carros++;
}

// Método construtor com parâmetro
ClassCarro::ClassCarro(int id)
{
    if(id < 0)
    {
        this->id = id;
        ClassCarro::num_carros++;
    }
    else
    {
        std::cout << "ERRO" << std::endl;
    }
}

// Método destrutor
ClassCarro::~ClassCarro()
{
    if(ClassCarro::num_carros == 0)std::cout << "ERRO" << std::endl;

    else
    {
        ClassCarro::num_carros--;
    }
}

// Retorna id do objeto
int ClassCarro::num_id()
{
    return this->id;
}

// Retorna endereço do objeto
ClassCarro* ClassCarro::endereco()
{
    return this;
}

// Retorna número de objetos instaciados
int ClassCarro::rnum_carros()
{
    return ClassCarro::num_carros;
}