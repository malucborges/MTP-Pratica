#include <stdio.h>

int fibonacci(int n) 
{
	int a = 1, b = 1, x;
	if(n == 1)
		x = a;
	if(n == 2)
		x = b;
	for(int i = 3; i <= n; i++)
	{
		x = a + b;
		a = b;
		b = x;
	}
	return x;
}

int main()
{
	int n, x;
	printf("Insira um valor para n: ");
	scanf("%d", &n);
	x = fibonacci(n);
	printf("\n%d", x);
	return 0;
}
