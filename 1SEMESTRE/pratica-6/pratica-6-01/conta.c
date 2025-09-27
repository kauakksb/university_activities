int contacarateresalfa(char frase[], int tamanho)
{
    int alfanum = 0;
    for(int i = 0; i < tamanho; i++)
    {
        if((frase[i] > 64 && frase[i] < 91) || (frase[i] > 96 && frase[i] < 123) || (frase[i] > 47 && frase[i] < 58))
        {
            alfanum++;
        }
    }

    return alfanum;
}