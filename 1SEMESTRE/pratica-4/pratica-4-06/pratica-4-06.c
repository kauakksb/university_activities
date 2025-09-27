#include <stdio.h>

void main(){

    float lado1, lado2, lado3, soma1, soma2, soma3;
    
    scanf("%f %f %f", &lado1, &lado2, &lado3);

    soma1 = lado1 + lado2;
    soma2 = lado1 + lado3;
    soma3 = lado2 + lado3;

    if (lado1 > 0 && lado2 > 0 && lado3 > 0){
        if (soma1 > lado3 && soma2 > lado2 && soma3 > lado1){
            if (lado1 != lado2){
                if (lado2 =!  lado3){
                    if(lado1 =! lado3){
                        printf("Triangulo escaleno");
                    }else if(lado1 == lado3){
                        printf("Triangulo isosceles");
                    }
                }else if(lado2 == lado3){
                    printf("Triangulo isosceles");
                }
    
            }else if(lado1 == lado2){
                if (lado2 == lado3){
                    printf("Triangulo equilatero");
                }else if(lado2 != lado3){
                    printf("Triangulo isosceles");
                }
            }
        }
    }else{
        printf("Valores invalidos");
    }
    
}