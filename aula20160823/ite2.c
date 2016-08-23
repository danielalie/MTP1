#include<stdio.h>
int main ()
{
    int i;
    int baseB, potP, resultado=baseB;
    printf ("digite numeros inteiros para base e potencia: ");
    scanf ("%d", &baseB);
    scanf ("%d", &potP);
    for (i=1; i<potP; i++)
        resultado = baseB*baseB;
    printf ("o resultado e: ",resultado);
    return 0;
}
