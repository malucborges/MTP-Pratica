#include <stdio.h>

int main()
{
	float num1, num2, soma;
	float *p, *q, *valor;
	printf("Digite dois numeros reais: ");
	scanf("%f %f", &num1, &num2);
	p = &num1;
	q = &num2;
	printf("\nO numero 1 e: %.1f", num1);
	printf("\nO endereco do numero 1 e: %p", p);
	printf("\nO numero 2 e: %.1f", num2);
	printf("\nO endereco do numero 2 e: %p", q);
	soma = num1 + num2;
	valor = &soma;
	printf("\nA soma dos numeros e: %.1f", soma);
	printf("\nO endereco da soma e: %p", valor);
	return 0;
}
