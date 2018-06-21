#include <stdio.h>

void operacao(int a, int b)
{
	printf("\nO quociente e: %d", a / b);
	printf("\nO resto e: %d", a % b);
}

int main()
{
	int a, b;
	printf("\nInsira um numero para a: ");
	scanf("%d", &a);
	printf("\nInsira um numero para b: ");
	scanf("%d", &b);
	operacao(a, b);
	return 0;
}
