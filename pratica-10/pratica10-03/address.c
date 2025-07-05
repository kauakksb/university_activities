#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct address {
    char *line;
    int number;
    int zipcode;
};

struct address * create_address(const char * input)
{
    int n = 0, m = 0;
    struct address *endereco;
    char * num;

    // Alocando espaço para uma struct address
    endereco = (struct address *)malloc(sizeof(struct address));

    // Verificando quantos caracteres estão contidos na linha
    while(1)
    {
        if(input[n] == '|')break;
        n++;
    }
    // Alocando espaço para a linha de acordo com o número de caracteres
    endereco->line = (char*)malloc(n * sizeof(char));

    // Armazenando caractere por caractere na linha alocada
    for(int i = 0; i < n; i++)
    {
        endereco->line[i] = input[i];
    }
    endereco->line[n] = '\0'; // Inserindo caractere de fim de linha
    n++; // Incrementando varável de manipulação da string para começar novo ciclo

    // Verificando quantos caracteres compoem o número
    while(1)
    {
        if(input[n] == '|')break;
        n++;
        m++;
    }
    // Alocando espaço para o número em uma string
    num = (char*)malloc(m * sizeof(char));

    // Transferindo os digitos dos números para a string de troca
    for(int i = 0; i < m; i++)
    {
        num[i] = input[i+(n-m)]; 
    }
    // Transferindo os digitos da string de troca para a variavel inteira
    endereco->number = atoi(num);
    free(num);// Liberando a memória alocada para que o ponteiro seja usado para alocar uma nova string

    n++; // Incrementando varável de manipulação da string para começar novo ciclo
    m = 0; // Reiniciando variável de manipulação de string

    // Verificando quantos caracteres compoem o último número
    while(1)
    {
        if(input[n] == '\0')break;
        n++;
        m++;
    }
    // Alocando espaço para o novo número na string
    num = (char*)malloc(m * sizeof(char));

    // Transferindo os digitos dos números para a string de troca
    for(int i = 0; i < m; i++)
    {
        num[i] = input[i+(n-m)]; 
    }
    // Transferindo os digitos da string de troca para a variavel inteira
    endereco->zipcode = atoi(num);
    free(num); // Liberando espaço alocado

    return endereco;
}

void free_address(struct address * addr)
{
    free(addr->line); // Libera espaço alocado pela linha da struct
    free(addr); // Libera espaço alocado pelo endereço da struct
}

// int main()
// {
//     char str[] = "Rua Bento Rodrigues|265|35052310";
//     struct address *endereco;
//     endereco = create_address(str);

//     printf("%s\n", endereco->line);
//     printf("%d\n", endereco->number);
//     printf("%d\n", endereco->zipcode);

//     free_address(endereco);
//     return 0;
// }