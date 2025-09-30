#include <string>
#include <list>

// Classe Aluno
class ClassAluno
{
private:
    std::string nome; // Nome do aluno
    int num_matricula; // Número de matrícula
    std::list<int> notas; // Lista de notas

public:
    // Método construtor
    ClassAluno(std::string nome, int num_matricula, std::list<int> notas);

    // Método destrutor
    ~ClassAluno();

    // Retorna nome do aluno
    std::string rnome();

    // Retorna número de matrícula
    int rnum_matricula();

    // Retorna lista de notas
    std::list<int> rnotas();

    // Retorna média das notas
    float calcula_media();

    // Retorna nota máxima do aluno
    int nota_maxima();

    // Retorna menor nota do aluno
    int menor_nota();
};