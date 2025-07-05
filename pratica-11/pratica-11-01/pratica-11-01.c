#include <stdio.h>
#include <stdlib.h>

void imprimeNaturais(int n)
{
    if(n < 0)return;
    printf("%d\n", n);
    imprimeNaturais(n-1);
}
