#include<stdio.h>
int main ()
{
    char frase [256];
    int i, cont;
    int isalpha (int c);
    printf("Escreva uma frase: ");
    gets(frase);
    printf("%s\n", frase);
    cont = 0;
    for (i=0; frase !='\0'; i++)
    {
        if (frase == isalpha)
            cont = cont+1;
    }
   printf("\n numero de caracteres c = %d", cont);
   return 0;
}
