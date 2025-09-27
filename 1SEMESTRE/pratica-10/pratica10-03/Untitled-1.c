char ** separa_string(char * string, char delim)
{
    char ** str;
    int separacoes = 0;
    int m = 0, n = 0;
    printf("%c\n", delim);
    system("PAUSE");
    printf("print inicial: %s\n", string);

    while(string[m] != '\0')
    {
        if(string[m] == delim)separacoes++;
        m++;
    }
    separacoes++;
    printf("separacoes: %d", separacoes);
    system("PAUSE");
    m = 0;
    str = (char**) malloc(separacoes * sizeof(char*));

    for(int j = 0; j < separacoes; j++)
    {
        if (j < (separacoes-1))
        {
            while(string[m] != delim)
            {
                printf("LETRA: %c\n", string[m]);
                printf("m: %d\n", m);
                m++;
            }
            printf("m: %d\n", m);
        }else if(j == (separacoes-1))
        {
            while(string[m] != '\0')m++;
        }
        printf("m: %d\n", m);
        n = m - n;
        str[j] = (char*)malloc(n* sizeof(char));

        for(int i = 0; i < n; i++)
        {
            str[j][i] = string[(m-n)+i];
            printf("LETRA GUARDADA: %c\n", str[j][i]);
        }
        str[j][n] = '\0';
        m++;
    }

    return str;
}