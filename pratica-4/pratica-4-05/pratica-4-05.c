#include <stdio.h>

void main(){

    int dia, mes, ano;

    scanf("%d\n %d\n %d",&dia, &mes, &ano);


    if (ano > 0){
        switch (mes)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if (dia > 0 && dia <= 31){
                    printf("Data valida");
                }else{
                    printf("Data invalida");
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if (dia > 0 && dia <= 30){
                    printf("Data valida");
                }else{
                    printf("Data invalida");
                }
                break;
            case 2:
                if ((ano % 4) == 0){
                    if ((ano % 100) && (ano % 400) != 0){

                        if (dia > 0 && dia <= 28){
                            printf("Data valida");
                        }else{
                            printf("Data invalida");
                        }

                    }else if((ano % 400) == 0){

                        if (dia > 0 && dia <= 29){
                            printf("Data valida");
                        }else{
                            printf("Data invalida");
                        }
                    }
                    
                }else{
                    if (dia > 0 && dia <= 28){
                        printf("Data valida");
                    }else{
                        printf("Data invalida");
                    }
                }
                break;

            default:
                printf("Data invalida");
                break;
        }
    }else{
        printf("Data invalida");
    }

}