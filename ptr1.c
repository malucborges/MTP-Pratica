#include <stdio.h>

int main()
{
	unsigned int num = 0xFACA8421;
	unsigned char *p;
	int i;
	printf("\nO endereco na memoria e: %u", &num);
	printf("\nO numero na base decimal e: %d", num);
	p = (unsigned char*) &num;
	for(i = 0; i < 4; i++)
	{
		printf("\nO conteudo e: %u", *(p+i));
	}
	return 0;
}