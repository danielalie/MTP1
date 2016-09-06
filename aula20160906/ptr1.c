#include<stdio.h>
int main ()
{
    unsigned int numero = 0xFACA8421;
    unsigned char * ponteiro = NULL;
    printf ("%p: %u\n", &numero, numero);//indentificador numero que mostra conteudo
    ponteiro = (unsigned char *) &numero;
    for (;ponteiro<&numero+1;ponteiro++)
        printf("%p: %X\n", ponteiro, *ponteiro);
    return 0;
}
