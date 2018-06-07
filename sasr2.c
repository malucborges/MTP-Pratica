#include <stdio.h>
#include <stdlib.h>

void imprimir(int p)
{
	int i;
	for(i = 0; i <= 20; i++)
	{
		if(p == 1)
		{
			if(i % 2 != 0)
				printf("%d ", i);
		}
		if(p == 2)
		{
			if(i % 2 == 0)
				printf("%d ", i);
		}
	}
}

int main ()
{
	int p;
	printf("INSIRA: \n1 - Ver os numeros impares. \n2 - Ver os numeros pares."
	"\n3- Sair. \nSua opcao e: ");
	scanf("%d", &p);
	switch(p)
	{
		case 1:
			imprimir(p);
			break;
		case 2:
			imprimir(p);
			break;
		case 3:
			printf("\nAte a proxima!");
			break;
		default:
			break;
	}
	return 0;
}
