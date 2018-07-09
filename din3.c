#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char * frase;
    int i = 0;
    frase = (char*)malloc(1*sizeof(char));
    printf("Insira uma frase: \n");
    while(1)
        {
            scanf("%c", frase+i);
            frase = (char *)realloc(frase, sizeof(char)*1);
            if(*(frase+i)==' ')
                break;
            i++;
        }
        *(frase+i) = '\0';
            while(i >= 0)
    {
        *(frase+i)= toupper(*(frase+i));
        i--;
    }
        printf("***%s", frase);
        free(frase);
    return 0;
}
