#include<stdio.h>
#include<stdint.h>
int main ()
{
    double fatorial=1;
    int i;
    int numero;
    printf ("fatorial de: ");
    scanf ("%d", &numero );
    for (i=2; i<=numero; i++)
        fatorial=fatorial*i;
    printf("o fatorial de %d  e %lf\n", numero, fatorial);
    return 0;

}

