#include <stadio.h>
#include "minhas_funcoes"

void testaTroca(float x, float y)
{
	troca(&x,&y);
	printf("%f %f", x, y);
}
