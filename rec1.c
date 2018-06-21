#include <stdio.h>

int soma(int vet[], int i)
{
	if (i == 0)
		return 0;
	else
	{
    	int sominha;
    	sominha = soma(vet, i - 1);
    	if (vet[i - 1] > 0)
			sominha = sominha + vet[i-1];
      	return (sominha);
	}
}

int main()
{
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31}; 
	int N = sizeof(A)/sizeof(int); 
	printf("\nSoma do vetor: %d", soma(A, N));
	return 0;
}
