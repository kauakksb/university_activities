#include <stdio.h>


unsigned int inverte(unsigned int num)
{

    unsigned int inverso = 0;

    while(num > 0)
    {
        inverso = (inverso * 10) + (num % 10);
        num = num / 10;
    }
    
    return inverso;
}

void main(){
    inverte(252525);
}