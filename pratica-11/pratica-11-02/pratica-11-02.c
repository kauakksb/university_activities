#include <stdio.h>

int cubo(int n)
{
    return (n * n) * n;
}

int somaCubos(int n)
{
    if(n <= 0)return 0;
    if(n == 1)return 1;
    if(n > 1){
        return cubo(n) + somaCubos(n-1);
    }
}