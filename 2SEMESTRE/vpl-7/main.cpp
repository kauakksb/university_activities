#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include "aluno.hpp"

/* 
    Lê entradas de alunos com nome, número de matrícula e notas e 
    retorna a média, a maior e a menor nota a partir disso 
*/
int main()
{
    std::list<ClassAluno*> alunos;
    ClassAluno *aluno;
    while(true)
    {
        std::string leitura; // Armazena nome do aluno ou flag de encerramento
        int num_matricula; // Armazena número de matrícula
        std::list<int> notas; // Armazena lista de notas do aluno

        std::cin >> leitura; // Faz a leitura do nome do aluno ou da flag de encerramento("END")

        if(leitura != "END")
        {
            std::cin >> num_matricula; // Lê número de matrícula

            // Faz a leitura das notas do aluno e verifica a flag de encerramento (-1)
            while(true)
            {
                int num;
                std::cin >> num;
                if(num == -1)break;
                
                else notas.push_back(num);
            }
            // Instanciando aluno e armazenando na lista 
            aluno = new ClassAluno(leitura, num_matricula, notas);
            alunos.push_back(aluno);
        }
        else break;
    }

    // Organiza alunos em ordem alfabética
    alunos.sort([](ClassAluno* aluno1, ClassAluno* aluno2){
        return aluno1->rnome() < aluno2->rnome();
    });

    // Exibe dados de saída dos alunos
    for(ClassAluno *aluno : alunos)
    {
        std::cout << aluno->rnum_matricula() << " " << aluno->rnome();
        for(int nota : aluno->rnotas())
        {
            std::cout << " " << nota; 
        }
        std::cout << std::endl;
        std::cout << std::fixed << std::setprecision(2) << aluno->calcula_media() << " ";
        std::cout <<  aluno->nota_maxima() << " " << aluno->menor_nota() << std::endl;
    }

    // Destrói instâncias de aluno e limpa a lista
    for(ClassAluno* aluno : alunos)
    {
        delete aluno;
    }
    alunos.clear();
    
    return 0;
}