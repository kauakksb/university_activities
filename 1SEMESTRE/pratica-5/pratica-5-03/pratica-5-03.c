#include <stdio.h>

int primo(int n){

    int i, conta_div, resultado;
    for(i = 1; i <= n; i++){

        if ((n % i) == 0){
            conta_div += 1;
        }

    }

    if (conta_div == 2){
        resultado = 1;
    }else{
        resultado = 0;
    }

    return resultado;

}