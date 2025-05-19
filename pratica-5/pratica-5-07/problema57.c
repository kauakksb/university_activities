
unsigned int soma_divisores(unsigned int num)
{
    unsigned int soma = 0;
    int i;
    
    for (i = 1; i <= num; i++)
    {
        if ((num % i) == 0)
        {
            soma = soma + i;
        }
    }

    return soma;
}