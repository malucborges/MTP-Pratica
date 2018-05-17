#include <stdio.h>

int main()
{
	int vetor[] = {0, 1, 2, 4, 8, 16, 1025};
	int i, x = 0;
	unsigned char *p;
	p = (unsigned char*) &vetor;	
	for(i = 0; i < sizeof(vetor); i++)
	{
		if(*(p+i) == 0x00)
		x++;
	}
	printf("Total de bytes investigados: %d"
	"\nQuantidade de bytes igual a 0: %d", sizeof(vetor), x);
	return 0;
}
