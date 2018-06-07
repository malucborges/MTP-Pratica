#include <stdio.h>

void raizes(int delta, int a, int b, int c)
{
	int r1, r2, rquad, i;
	for(i = 0; i <= delta; i++)
	{
		if(i*i == delta)
		{
			rquad = i;
			break;
		}
	}
	if(delta > 0)
	{
		r1 = (-b + rquad)/(2*a);
		r2 = (-b - rquad)/(2*a);	
		printf("\nRaiz 1 = %d	\nRaiz 2 = %d", r1, r2);
	}
	else if(delta == 0)
	{
		r1 = -b/(2*a);
		r2 = r1;
		printf("\nRaiz 1 = %d	\nRaiz 2 = %d", r1, r2);
	}
	else if(delta < 0)
	{
		printf("\nNao existe raizes reais.");
	}	
}

int  main()
{
	int a, b, c, delta;
	printf("Digite os coeficientes a, b e c: ");
	scanf("%d %d %d", &a, &b, &c);
	delta = (b*b)-4*(a*c); 
	raizes(delta, a, b, c);
	return 0;
}
