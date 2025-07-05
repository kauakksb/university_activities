#include <stdio.h>

double mediaVetor(int v[], int n)
{
    if(n <= 0)return 0;
    if(n == 1)return v[n-1];
    return (v[n-1] + mediaVetor(v, n-1))/ n;
}