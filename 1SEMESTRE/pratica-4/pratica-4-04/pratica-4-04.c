#include <stdio.h>

void main(){

    char estado;
    float preco, novo_preco;

    scanf("%f %c", &preco, &estado);
    
    if (estado == 'G'){
        novo_preco = preco * 1.07;
        printf("O valor em MG seria de R$:%.2f", novo_preco);
    }else if(estado == 'P'){
        novo_preco = preco * 1.12;
        printf("O valor em SP seria de R$:%.2f", novo_preco);
    }else if(estado == 'J'){
        novo_preco = preco * 1.15;
        printf("O valor em RJ seria de R$:%.2f", novo_preco);
    }else if(estado == 'S'){
        novo_preco = preco * 1.08;
        printf("O valor em MS seria de R$:%.2f", novo_preco);
    }else{
        printf("Estado Invalido");
    }
}