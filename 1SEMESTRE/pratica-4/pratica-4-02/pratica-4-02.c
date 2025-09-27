#include <stdio.h>

void main()
{
	int v1, v2;
	scanf("%d \n %d", &v1, &v2);
	
	if (v1 <= v2){
		printf("Sem infracao");
	}else{
		if ((v1/v2) <= 1.2 ){
			printf("Infracao Media");
		}else if((v1/v2 <= 1.5)){
			printf("Infracao Grave");
		}else if((v1/v2) > 1.5 ){
			printf("Infracao Gravissima");
		}
	}
}
