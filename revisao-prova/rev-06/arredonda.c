float arredonda(float n){

    int comparador ;
    float valor_arredondado;

    if(n < 0){
        valor_arredondado = n * -1;
        comparador = n * -1;
    }else{
        valor_arredondado = n;
        comparador = n;
    }

    if ((valor_arredondado - (float)comparador) < 0.25){
        valor_arredondado = (float)comparador;
    }else if((valor_arredondado - (float)comparador) >= 0.25 && (n- (float)comparador) < 0.75){
        valor_arredondado = (float)comparador + 0.5;
    }else if((valor_arredondado - (float)comparador) >= 0.75){
        valor_arredondado = (float)comparador + 1;
    }

    if(n < 0){
        valor_arredondado = valor_arredondado * -1;
    }

    return valor_arredondado;
}


void arredondaNotas(float *endNota1, float *endNota2, float *endNota3){

    *endNota1 = arredonda(*endNota1);
    *endNota2 = arredonda(*endNota2);
    *endNota3 = arredonda(*endNota3);
}