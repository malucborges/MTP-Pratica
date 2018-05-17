#include <stdio.h>

int main()
{
	int vetor[] = {0x0F, 0xFF, 0xFFFF, 0xFFFFFF, 0x80000001, 0xFFFFFFFF};
	int i, x = 0;
	unsigned char *p;
	for(i = 0; i < sizeof(vetor); i++)
	{
		p = (unsigned char*) &vetor[i];
		if(*p >= 0x01)
			x++;
		printf("\nConteudo do byte %d: %d", i+1, *p);
	}
	printf("\nTotal de bytes investigados: %d"
	"\nTotal de bytes com pelo menos um bit igual a l: %d", sizeof(vetor), x);
	return 0;
}
