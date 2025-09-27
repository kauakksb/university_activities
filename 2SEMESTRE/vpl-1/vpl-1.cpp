#include <iostream>
#include <string>

int main()
{
    // Criando string para leitura da frase que será feita a verificação e variável de condição
    std::string palavra;
    int condicao = 1;

    /* 
        Realizando a leitura da frase através da função getline, onde um dos parâmetros
    */
    std::getline(std::cin,palavra);
    
    int i = 0;
    while(palavra[i] != '\0')
    {
        if(palavra[i] != palavra[palavra.length()-(i+1)])
        {
            condicao = 0;
            break;
        }
        i++;
    }

    if(condicao)
    {
        std::cout << "SIM";
    }
    else
    {
        std::cout << "NAO";
    }

    return 0;
}