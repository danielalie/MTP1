#include<stdio.h>
int main ()
{
    int nreal1, nreal2, soma;
    printf ("digite um numero real: ");
    scanf ("%lf", &nreal1);
    printf ("digite outro numero real: ");
    scanf ("%lf", &nreal2);
    soma=nreal1+nreal2;
    printf ("a soma dos numeros e: %f", &soma);
    return 0;
}
