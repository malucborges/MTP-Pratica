#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void desenho(int x, int y)
{	
	char caractere[] = "! . @ # $ % ¨ & * ( ' ' ) _ + ¹ ² ³ £ : ¢ ¬";
	int a, b, i, j;
	srand(time(0));
	a = strlen(caractere);
	for(i = 0; i < y; i++)
	{	
		for(j = 0; j < x; j++)
		{	
			b = rand()%a;
			printf("%c", caractere[b]);
		}
		printf("\n");
	}
}

int  main()
{	
	int desenhar[256][256], x, y;
	printf("Digite o numero de colunas e de linhas: ");
	scanf("%d %d", &x, &y);
	desenho(x, y);
	return 0;
}
