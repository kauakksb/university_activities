#include <iostream>
#include <exception>
#include <stdexcept>
#include <vector>

class NegativeResultException: public std::exception
{
    private:
        int valor;

    public:
        // Método construtor
        NegativeResultException(const int _valor): valor(_valor){}

        // Método destrutor
        ~NegativeResultException(){}

        // Sobrescrita de método what()
        const char *what() const noexcept override
        {
            return "Erro: Resultado Negativo.";
        }

        // Retorna valor do número que causou a exceção
        int get_valor()
        {
            return this->valor;
        }
};

int main()
{
    std::vector<int> numeros = {-20, -10, 0, 10, 20};
    try
    {
        int leitura;
        std::cin >> leitura;
        if(numeros.at(leitura) < 0) throw NegativeResultException(numeros.at(leitura));

        std::cout << numeros.at(leitura) << std::endl;

    }
    catch(std::out_of_range &excecao)
    {
        std::cout << excecao.what() << std::endl;
    }
    catch(NegativeResultException &excecao)
    {
        std::cout << excecao.what() << std::endl;
        std::cout << excecao.get_valor();
    }

    return 0;
}