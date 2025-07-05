#include <stdio.h>

int i = 0;

void imprimeInvertida(char str[])
{
    if(str[i] == '\0')return;
    i++;
    imprimeInvertida(str);
    i--;
    printf("%c", str[i]);
}