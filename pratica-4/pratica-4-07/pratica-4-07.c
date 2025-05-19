#include <stdio.h>

float arredonda(float num){

    int num_aux;
    float num_func;
    float valor_arredondado, arredondador;

    if (num < 0)
    {
        num_func = num * -1;
        num_aux = num * -1;
    }else if(num >= 0){
        num_func = num;
        num_aux = num;
    }

    if((num_func - (float)num_aux) > 0.5)
    {
        arredondador = ((float)num_aux + 1) - num_func;
        valor_arredondado = num_func + arredondador;

    }else if ((num_func - (float)num_aux) <= 0.5)
    {
        arredondador = num_func - (float)num_aux;
        valor_arredondado = num_func - arredondador;
    }
    
    if(num < 0){
        valor_arredondado *= (-1);
    }
    
    return valor_arredondado;
}