#include <stdio.h>

void main(){

    float num1, num2, resultado;
    char operador;

    scanf("%f\n", &num1);
    scanf("%c\n", &operador);
    scanf("%f\n", &num2);


    switch (operador)
    {
    
    case '+':
        printf("%f + %f = %.2f",num1, num2, num1 + num2);
        break;

    case '-':
        printf("%f - %f = %.2f",num1, num2, num1 - num2);
        break;

    case '*':
        printf("%f * %f = %.2f",num1, num2, num1 * num2);

    case '/':

        if (num2 == 0){
            printf("Erro! Divisao por zero nao e permitida");
        }else{
            printf("%f / %f = %.2f", num1, num2, num1 / num2);
        }
        break;

    default:
        printf("Operador invalido!");
        break;
    }
}