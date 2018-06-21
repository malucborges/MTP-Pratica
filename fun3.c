#include <stdio.h>

void funcao(int a[],int b[], int m, int n)
{
	int i, j, k = 0;
	int c[20];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			if( a[i] == b[j])
			{
				c[k] = a[i];
				k++;
			}	
		}
	}
	for(i = 0; i < k; i++)
		printf("%d ", c[i]);
}

int main()
{
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31}; 
	int n = sizeof(A)/sizeof(int); 
	int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29}; 
	int m = sizeof(B)/sizeof(int); 
	printf("Os elementos comuns sao: ");
	funcao(A, B, m, n);
	return 0;
}
