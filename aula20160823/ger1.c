#include<stdio.h>
int main ()
{
    int i, numero;
    printf ("numero: ");
    scanf ("%d", &numero);
    for (i=2; i < numero ; i++) {
         if (numero%i == 0)
    {
        printf ("nao e primo!\n");
        break;
    }
}
if (i==numero)
    printf("primo!\n");
    return 0;
}
