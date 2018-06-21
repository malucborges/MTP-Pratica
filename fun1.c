#include <stdio.h>

void soma(int a, int b, int c, int d)
{
	int m, n;
	m = (d*a) + (b*c);
	n = b*d;
	printf("\nResultado da soma: %d / %d", m, n);
}

int main()
{
	int a, b, c, d;
	printf("\nInsira um numero para a: ");
	scanf("%d", &a);
	printf("\nInsira um numero para b: ");
	scanf("%d", &b);
	printf("\nInsira um numero para c: ");
	scanf("%d", &c);
	printf("\nInsira um numero para d: ");
	scanf("%d", &d);
	if(b == 0 || d == 0)
		printf("\nImpossivel calcular.");
	else
		soma(a, b, c, d);
	return 0;
}
