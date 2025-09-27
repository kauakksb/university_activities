#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main(void)
{
	char * palavra = "PDS-1";
	int contador = 0;
	
	for(contador; contador < strlen(palavra); contador++)
	{
		printf("%d ", palavra[contador]);
	}
	
	system("PAUSE");
}

