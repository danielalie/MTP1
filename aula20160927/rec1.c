#include<stdio.h>

void inverter (char * frase, int n);
int main  ()
{
    char frase [256];
    printf ("entre com uma frase: ");
    gets (frase);
    inverter (frase, 0);
    printf ("\n");
    return 0;
}

void inverter (char *frase, int n)
{
    if (frase [n] != '\0') // pergunta se a primeira letra eh \0, ate achar o \0 (ultima letra)
    {
        inverter(frase, n+1);//quando encontra o \0, imprime ele (ultima letra) e vai voltando, percorrendo
        printf ("%c", frase[n]);
    }
}
