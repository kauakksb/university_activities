#include <iostream>
#include <list>
#include "carro.hpp"

int main()
{
    std::list<ClassCarro*> carros;
    ClassCarro *carro;
    bool condicao = true;

    while(condicao)
    {
        char leitura;
        std::cin >> leitura;
        switch (leitura)
        {
        case 'A':
            carro = new ClassCarro();
            carros.push_back(carro);
            
            std::cout << carro->num_id() << " " << carro->endereco() << std::endl;
            break;

        case 'C':
            int id;
            std::cin >> id;
            if(id < 0)
            {
                carro = new ClassCarro(id);
                carros.push_front(carro);
                std::cout << carro->num_id() << " " << carro->endereco() << std::endl;
            }
            else 
            {
                std::cout << "ERRO" << std::endl;
            }
            break;
            
        case 'R':
            if(carros.empty())
            {
                std::cout << "ERRO" << std::endl;
            }
            else
            {
                carro = carros.front();
                std::cout << carro->num_id() << " " << carro->endereco() << std::endl;
                carros.remove(carro);
                delete carro;
            }
            break;
            
        case 'N':
            std::cout << ClassCarro::rnum_carros() << std::endl;
            break;

        case 'P':
            int pos;
            std::cin >> pos;

            if((unsigned)pos > carros.size() || pos < 0)
            {
                std::cout << "ERRO" << std::endl;
            }
            else
            {
                int contador = 1;
                for(ClassCarro *it_carro : carros)
                {
                    if(contador == pos)
                    {
                        std::cout << it_carro->num_id() << " " << it_carro->endereco() << std::endl;

                    }
                    contador++;
                }
            }
            break;

        case 'L':
            for(ClassCarro *it_carro : carros)
            {
                std::cout << it_carro->num_id() << " " << it_carro->endereco() << std::endl;
            }
            break;

        case 'E':
            condicao = false;
            break;

        default:
            break;
        }
    }

    for(ClassCarro* carro : carros) 
    {
        delete carro;
    }
    carros.clear();
    return 0;
}