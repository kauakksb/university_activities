#include <stdio.h>

int soma(int n){

    int i, soma = 0;

    for (i = 1; i <= n; i++){
        soma += i;
    }

    return soma;
}