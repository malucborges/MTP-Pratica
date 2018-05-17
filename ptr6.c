#include <stdio.h>

int main()
{
	char str[16], info[256];
	int i;
	int *p;
	for(i = 0; i < 16; i++)
		str[i] = '0';
	printf("Insira uma informacao textual: ");
	fgets(info, 256, stdin);
	p = (int*) &info;
	for(i = 0; i < 4; i++)
		printf("%i ", *(p+i));
	printf("; (hex) ");
	for(i = 0; i < 4; i++)
		printf("%X ", p[i]);
	return 0;
}
