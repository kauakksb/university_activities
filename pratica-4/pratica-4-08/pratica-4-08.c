#include <stdio.h>

void par_ou_impar(int num){

    if (num <= 0){
        printf("ERRO: numero invalido");

    }else if (num > 0)
    {
        if((num % 2) == 0){
            printf("%d e par.", num);
        }else if((num % 2) != 0){
            printf("%d e impar.", num);
        }
    }
    
}

void main(){

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    par_ou_impar(num);
}