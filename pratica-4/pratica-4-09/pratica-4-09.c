#include <stdio.h>

void main(){

    int ano;
    printf("Digite um ano:");
    scanf("%d", &ano);

    if((ano % 4) == 0){
        if((ano % 100) == 0 && (ano % 400) != 0){
            printf("O ano de %d nao e bissexto", ano);

        }else{
            printf("O ano de %d e bissexto", ano);
        }
    }else{
        printf("O ano de %d nao e bissexto", ano);
    }
}