#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

void partida(std::string palavra_escolhida)
{
    std::string tentativa;
    std::string retorno;
    std::string letras_erradas;
    
    int num_tentativas = 0;

    while(num_tentativas < 5)
    {
        std::cin >> tentativa;
        retorno = tentativa;
        for(int i = 0; i < 5; i++)
        {
            if(tentativa[i] == palavra_escolhida[i])
            {
                retorno[i] = tentativa[i];
            }
            else
            {
                if((int)palavra_escolhida.find(tentativa[i]) == -1)
                {
                    retorno[i] = '*';
                    if((int)letras_erradas.find(tentativa[i]) == -1)
                    {
                        letras_erradas.push_back(tentativa[i]);
                    }
                }
                else
                {
                    retorno[i] = tolower(tentativa[i]);
                }
            }
        }
        
        if(retorno == palavra_escolhida)
        {
            std::cout << retorno;
            std::cout << " (" << letras_erradas << ")" << std::endl;
            std::cout << "GANHOU!";
            return;
        }
        else
        {
            std::cout << retorno;
            std::cout << " (" << letras_erradas << ")" << std::endl;
            
        }
        num_tentativas++;
    }
    std::cout << "PERDEU! " << palavra_escolhida;
}

int main()
{
    std::ifstream arquivo;
    std::string leitura;
    std::string palavra_escolhida;
    
    int num_palavras;
    int num_palavra_escolhida;
    
    arquivo.open("palavras.txt");

    if(!arquivo.is_open())
    {
        std::cout << "Erro ao abrir o arquivo" << std::endl;
    }
    
    std::getline(arquivo, leitura);
    num_palavras = std::stoi(leitura);
    std::string palavras[num_palavras];

    for(int contador = 0 ; contador < num_palavras; contador++)
    {
        std::getline(arquivo, leitura);
        palavras[contador] = leitura;
    }
    arquivo.close();

    std::cin >> num_palavra_escolhida;
    palavra_escolhida = palavras[num_palavra_escolhida-1];
    
    partida(palavra_escolhida);
    return 0;
}
