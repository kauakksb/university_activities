
int soma_digitos_pares(unsigned int num)
{

    int i = 10, soma = 0, digito, redutor;

    while(i < num)
    {
        redutor = num / i;
        redutor *= i;
        digito = (num - redutor)/ (i/10);
        if((digito % 2) == 0)
        {
            soma += digito;
        }
        i *= 10;
    }

    redutor = num / i;
    redutor *= i; 
    digito = (num - redutor)/ (i/10);
    if((digito % 2) == 0)
    {
        soma += digito;
    }

    return soma;
}