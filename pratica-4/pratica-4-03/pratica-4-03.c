#include <stdio.h>

void main(){

    char sexo;
    int idade, contribuicao;

    if (sexo == "M"){
        if(idade >= 65 && contribuicao >= 30){
            printf("Pode aposentar");

        }else if(idade >= 60 && contribuicao >= 35){
            printf("Pode aposentar");
        }
        else{
            printf("Nao pode aposentar");
        }
    }else if(sexo == "F"){
        if(idade >= 60 && contribuicao >= 30){
            printf("Pode aposentar");

        }else if(idade >= 55 && contribuicao >= 35){
            printf("Pode aposentar");
        }
        else{
            printf("Nao pode aposentar");
        }
    }
}