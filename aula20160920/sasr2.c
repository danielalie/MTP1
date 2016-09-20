#include<stdio.h> // TERMINAR

void imprimirpares ();
void imprimirimpares ();

int main ()
{
    char entrada[256];
    printf ("Deseja ver os numeros pares ou impares entre 1 e 10?\n");
    scanf("%d",entrada);
    if (entrada==pares)
    {
        imprimirpares ();
    }
    if (entrada==impares)
    {
        imprimirimpares ();
    }
    return 0;
}

void imprimirpares ()
{
    printf ("pares: 2, 4, 6, 8, 10\n");
}

void imprimirimpares ()
{
    printf ("impares: 1, 3, 5, 7, 9");
}
