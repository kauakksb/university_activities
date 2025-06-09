#include <stdio.h>

int mdc(int a, int b, int c, int d)
{
	int numeros[4] = {a, b, c, d};
	int maior, menor, resto;
	for(int j = 0; j < 4; j++)
	{
		for(int i = 1; i < 4; i++)
		{
			int copia;
			if(numeros[i] > numeros[i-1])
			{
				copia = numeros[i-1];
				numeros[i-1] = numeros[i];
				numeros[i] = copia;
			}
		}
	}
	
	int i = 0;
	maior = numeros[i];
	menor = numeros[i+1];
	resto = maior % menor;

	while(1)
	{
		while(resto != 0)
		{
			maior = menor;
			menor = resto;
			resto = maior % menor;
		}
		i++;

		if(i == 3)break;

		if(numeros[i+1] > menor)
		{
			maior = numeros[i+1];
		}else{
			maior = menor;
			menor = numeros[i+1];
		}
		resto = maior % menor;
	}

	return menor;
}

int main()
{
	FILE * arq = fopen("case.txt",  "r");
	
	int a, b, c, d;

	fscanf(arq, "%d", &a);
	fscanf(arq, "%d", &b);
	fscanf(arq, "%d", &c);
	fscanf(arq, "%d", &d);
	
	printf("%d", mdc(a, b, c, d));

	fclose(arq);
	return 0;
}
