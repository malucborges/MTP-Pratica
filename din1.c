#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media(float *num, int j)
{
    int i;
    float med = 0.0f;
    for(i = 0; i < j; i++)
        med = med + num[i];
    med = med / j;
    return med;
}

float desviop(float *num, int j)
{
    float med = media(num, j);
    float des = 0.0f;
    int i;
    for(i = 0; i < j; i++)
            des = des + pow(num[i] - med, 2);
    des = des / (j - 1);
    return sqrt(des);
}

int main()
{
    float *numero;
    int i, j; 
    printf("Insira a quantidade de numeros que voce deseja: ");
    scanf("%d", &j);
    numero = (float*)malloc(j*sizeof(float));
    for(i = 0; i < j; i++)
    {
        printf("Insira o numero %d: ", i + 1);
        scanf("%f", numero + i);
    }
    printf("\nMedia dos numeros: %.3f", media(numero, j));
    printf("\nDesvio padrao dos numeros: %.4f\n", desviop(numero,j));
    free(numero);
    return 0;
}
