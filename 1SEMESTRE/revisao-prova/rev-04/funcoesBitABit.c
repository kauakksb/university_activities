
int codigoDeArea(unsigned int number){

    int ddd = (float)number/100000000;

    return ddd;
}

int parEmImpar(unsigned int number){

    return number + ((number+1) & 1);
}

int par(unsigned int number){

    return (number+1) & 1;
}


