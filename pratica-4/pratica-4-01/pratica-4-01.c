#include <stdio.h>

int divisivelPor3(int num1, int num2, int num3, int num4, int num5){
    int divPor3 = 0;

    if ((num1 % 3) == 0){
        divPor3 += 1;
    }
    if ((num2 % 3) == 0){
        divPor3 += 1;
    }
    if ((num3 % 3) == 0){
        divPor3 += 1;
    }
    if ((num4 % 3) == 0){
        divPor3 += 1;
    }
    if ((num5 % 3) == 0){
        divPor3 += 1;
    }
    

    return divPor3;
}

void main(){
    int num1, num2, num3, num4, num5;
    scanf("%d \n %d \n %d \n %d \n %d", &num1, &num2, &num3, &num4, &num5);
    
    int compMaior;
    int compMenor;
    
    
    if(num1 >= num2){
        compMaior = num1;
        compMenor = num2;
    }else if(num1 < num2){
        compMaior = num2;
        compMenor = num1;
    }
    
    if(num3 > compMaior){
        compMaior = num3;
    }else if(num3 < compMenor){
        compMenor = num3;
    }
    
    if(num4 > compMaior){
        compMaior = num4;
    }else if(num4 < compMenor){
        compMenor = num4;
    }
    
    if(num5 > compMaior){
        compMaior = num5;
    }else if(num5 < compMenor){
        compMenor = num5;
    }
    

    printf("Maior: %d\n\n", compMaior);
    printf("Menor: %d\n\n", compMenor);
    printf("Quantidede de divisiveis por 3: %d", divisivelPor3(num1, num2, num3, num4, num5));
}
