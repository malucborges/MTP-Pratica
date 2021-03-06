#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void preenche(float  * elemento);
void imprime(float  **matriz,  int  N,  int  M);
void transposta(float **matriz, int M, int N);

int main()
{
  int i, j;
  int N, M;
  float **matriz;
  printf("Insira a quantidade de vertices do poligono: ");
  scanf("%d", &N);
  M = N;
  matriz = calloc(N, sizeof(float*));
  for(i = 0; i < N; i++)
    {
		matriz[i] = calloc(M, sizeof(float));
    	for(j = 0; j < M; j++)
    	{
      		printf("Elemento(%d,%d): ", i, j);
      		preenche(&matriz[i][j]);
    	}
    }
  imprime(matriz, N, M);
  transposta(matriz, N, M);
  for(i = 0; i < N; i++)
		free(matriz[i]);
  free(matriz);
  return 0;
}

void preenche(float * elemento)
{
  scanf("%f", elemento);
}

void imprime(float **matriz, int N, int M)
{
  int i, j;
  printf("\nMatriz %dx%d:\n", N, M);
  for(i = 0; i < N; i++)
  	for(j = 0; j < M; j++)
    	printf("%g%c", matriz[i][j], (j == M-1)? '\n':'\t');
}

void transposta(float **matriz, int M, int N)
{
  int i, j;
  printf("\nTransposta %dx%d:\n", N, M);
  for(i = 0; i < N; i++)
	for(j = 0; j < M; j++)
    	printf("%g%c", matriz[j][i], (j == M-1)? '\n':'\t');
}
