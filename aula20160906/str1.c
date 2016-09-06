#include<stdio.h>
#include<ctype.h>
#include <string.h>
#define N 256
int main ()
{
    int i;
    char frase [N];
    printf ("frase: ");
    gets (frase);
    for (i=0; frase[i] != NULL; i++)
    {
        frase[i]=toupper(frase[i]);
    }
    printf ("tamanho: %u\n",strlen(frase));

    if (strncmp(frase, "BOM DIA",7) == 0)
        printf ("Bom dia pra vc tambem! :) \n");
    else
        printf ("voce quer dizer: %s?\n", frase);
    return 0;
}
