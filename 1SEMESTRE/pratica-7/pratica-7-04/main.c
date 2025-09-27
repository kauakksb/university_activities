#include <stdio.h>


void main()
{
	int linhas, colunas;
		
	scanf("%d", &linhas);
	scanf("%d", &colunas);
	
	int matriz[linhas][colunas];
	int maiorValor = matriz[linhas][colunas];
	int maiorColuna;

	
	
	for(int i = 0; i < colunas; i++)
	{
		for(int j = 0; j < linhas; j++)
		{	
			scanf("%d", &matriz[j][i]);
		}
		
	}
	
	
	for(int j = 0; j < colunas; j++)
	{
		for(int i = 0; i < linhas; i++)
		{
			if(maiorValor > matriz[i][j])
			{
				maiorValor = matriz[i][j];
				maiorColuna = j;
			}
		}
	}
	
	for(int i = 0; i < linhas; i++)
	{
		printf("%d\n", matriz[i][maiorColuna]);
	}
}
