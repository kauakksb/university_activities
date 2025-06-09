#include <stdio.h>

int main()
{
	FILE * arq = fopen("case.txt", "r");
	int inicio, fim, passo, n;
	int celsius, kelvin;
	float fahrenheit;
	
	fscanf(arq, "%d", &inicio);
	fscanf(arq, "%d", &fim);
	fscanf(arq, "%d", &passo);
	
	n = (fim - inicio) / passo;
	
	for(int i = 0; i <= n; i++)
	{
		celsius = inicio + passo * i
		kelvin = celsius + 273;
		fahrenheit = celsius * (9/5) + 32;
		
		printf("%d %.0f %d\n", celsius, fahrenheit, kelvin);
	}
	
	fclose(arq);
	return 0;
}
