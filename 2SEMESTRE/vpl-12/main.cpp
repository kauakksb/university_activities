#include <iostream>
#include <memory>

class Teste{
    private:
        int num;

    public:

        // Métodos construtores
        Teste(): num(0)
        {
            std::cout << "Construtor " << this->num << std::endl;
        }

        Teste(const int _num): num(_num)
        {
            std::cout << "Construtor " << this->num << std::endl;
        }

        // Método destrutor
        ~Teste()
        {
            std::cout << "Destrutor " << this->num << std::endl;
        }

        // Altera valor do atributo "num"
        void setNum(const int num)
        {
            this->num = num;
        }
};  


int main()
{
    // Lê um número que será usado como contador no loop
    int leitura_num;
    std::cin >> leitura_num;

    // Define o tipo de ponteiro ao analisar se a leitura é um número par ou ímpar
    if((leitura_num % 2) == 0)
    {
        // Leitura par: cria ponteiros alocados manualmente e unique_ptr(s) 
        for(int c = 1; c <= leitura_num; c++)
        {
            Teste * teste_ptr = new Teste(c);

            auto unq_teste_ptr = std::make_unique<Teste>(c);

            delete teste_ptr;
        }
    }
    else
    {
        /*
        Leitura ímpar: cria um shared_ptr antes do loop e outros durante o loop, 
        aos quais o ponteiro inicial é atribuido 
        */ 
        auto srd_teste_ptr = std::make_shared<Teste>();
        for(int c = 1; c <= leitura_num; c++)
        {
            std::shared_ptr<Teste> srd_teste_ptr_loop = srd_teste_ptr;
            srd_teste_ptr_loop->setNum(c);
        }

        // Imprime o número de ponteiros que compartilham o acesso ao objeto inicial
        std::cout << srd_teste_ptr.use_count() << std::endl;
    }

    return 0;
}