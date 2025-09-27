#include <stdio.h>
#include <string.h>

#define TAMMAX 100

int contaTamanho(char * str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

int main()
{
	FILE * arq = fopen("texto.txt", "r");
	char leitura[TAMMAX];
	int tamanhoMaior = 0;
	char maiorLinha[TAMMAX];
	
	while(!feof(arq))
	{
		fgets(leitura, TAMMAX, arq);
		if(contaTamanho(leitura) > tamanhoMaior)
		{
			tamanhoMaior = contaTamanho(leitura);
			strcpy(maiorLinha, leitura);
		}
	}
	
	fclose(arq);
	printf("%s\n", maiorLinha);
	printf("%d", tamanhoMaior);
}
