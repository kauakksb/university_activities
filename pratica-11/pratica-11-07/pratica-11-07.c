#include <stdio.h>

int inverteNumero(int x)
{
    int novo_x;
    if(x < 10)return x;
    if(x > 0 && x > 10)
    {
        novo_x = x;
        x = x % 10;
        novo_x = (novo_x - x)/10;
        while(x < novo_x)
        {
            x = x * 10;
        }
        return x + inverteNumero(novo_x);
    }
    
}