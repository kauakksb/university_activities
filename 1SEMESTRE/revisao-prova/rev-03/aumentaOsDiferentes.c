
void aumentaOsDiferentes(int *end_var1, int *end_var2){

    int somador;

    if (*end_var1 == *end_var2){
        *end_var1 = 0;
        *end_var2 = 0;
    }else if(*end_var1 != *end_var2){
        somador = *end_var1;
        *end_var1 = *end_var1 + *end_var2;
        *end_var2 = *end_var2 + somador; 
    }
}