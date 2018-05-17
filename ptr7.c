#include <stdio.h>

int main()
{
	int vetor[4], i;
	char *p;
	for(i = 0; i < 4; i++)
		vetor[i] = '0';
	for(i = 0; i < 4; i++)
	{
		printf("\nInsira o numero %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	p = (char*) &vetor;
	for(i = 0; i < sizeof(vetor); i++)
		printf("%c", *(p+i));
	return 0;
}
