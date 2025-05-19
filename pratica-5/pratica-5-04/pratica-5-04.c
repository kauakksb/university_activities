#include <stdio.h>

void main(){

    int i, leitura, maior, menor;

    for (i = 0; i <= 15; i++){

        scanf("%d", &leitura);

        if (leitura >= maior){
            maior = leitura;
        }
        if (leitura <= menor){
            menor = leitura;
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d", menor);
}

