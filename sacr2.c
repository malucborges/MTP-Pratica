#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogo()
{
	int i, j = 0, d[5], soma = 0;
	srand(time(0));
	do
	{
		printf("Tentativa %d", j+1);
		for(i = 0; i < 5; i++)
		{
			d[i] = getchar();
			do
				d[i] = rand()%7;
			while(d[i] == 0);
			printf("Lancamento %d: %d", i+1, d[i]);
			soma = soma + d[i];
		}
		if(soma >= 18 && soma <= 23)
			return soma;	
		j++;
		soma = 0;
		printf("\n\n");
	}
	while(j < 3);
	return soma;
}

int  main()
{
	int soma;
	soma = jogo();
	if(soma >= 18 && soma <= 23)
		printf("\n\nParabens! Voce ganhou com %d pontos!", soma);
	else 
		printf("\nVoce perdeu. Tente mais uma vez!");
	return 0;	
}
