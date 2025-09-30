#include <iostream>
#include <list>
#include <algorithm>
#include "aluno.hpp"

// Método construtor
ClassAluno::ClassAluno(std::string nome, int num_matricula, std::list<int> notas)
{
    this->nome = nome;
    this->num_matricula = num_matricula;
    this->notas = notas;
}

// Método destrutor
ClassAluno::~ClassAluno()
{
    std::cout << this->nome << " destruido" << std::endl;
}

// Retorna nome do aluno
std::string ClassAluno::rnome()
{
    return this->nome;
}

// Retorna número de matrícula
int ClassAluno::rnum_matricula()
{
    return this->num_matricula;
}

// Retorna lista de notas do aluno
std::list<int> ClassAluno::rnotas()
{
    return this->notas;
}

// Retorna média das notas do aluno
float ClassAluno::calcula_media()
{
    float media = 0; // Guarda a soma das notas

    // Somando notas do aluno
    for(int nota : this->notas)
    {
        media += (float)nota;
    }
    // Calculando média
    media = media/ this->notas.size();

    return media;
}

// Retorna nota máxima do aluno
int ClassAluno::nota_maxima()
{
    // Extraindo maior nota
    auto nota_maxima_it = std::max_element(this->notas.begin(), this->notas.end());
    int nota_maxima = *nota_maxima_it;

    return nota_maxima;
}

// Retorna menor nota do aluno
int ClassAluno::menor_nota()
{
    // Extraindo menor nota
    auto menor_nota_it = std::min_element(this->notas.begin(), this->notas.end());
    int menor_nota = *menor_nota_it;

    return menor_nota;
}