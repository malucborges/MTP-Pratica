#include <stdio.h>

void inv(char *msg)
{
   if(*msg)
   {
		inv(msg + 1);
		putchar(*msg);
   }
}

int main()
{
   char frase[256];
   printf("Insira uma frase:  ");
   fgets(frase, 256, stdin);
   inv(frase);
   return 0;
}
