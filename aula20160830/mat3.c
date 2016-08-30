#include<stdio.h>
#include<math.h>
int main ()
{
    int numero, base, logbase;
    printf ("digite uma base para o logaritmo: ");
    scanf ("%f", base);
    printf ("digite um numero para se calcular o logaritmo: ");
    scanf ("%f", numero);
    logbase = log (base, numero);
    printf ("o logaritmo e: %f", logbase);
    return 0;
}
