#include<stdio.h>
#include<time.h>
int main ()
{

    int numdigitado, resultado;
    printf("digite um numero inteiro nao negativo: ");
    scanf ("%d", &numdigitado);
    int aleat;
    srand (time (0));
    aleat = rand ()%2;
    printf ("numero sorteado: %d\n",aleat);
    resultado = numdigitado+aleat;
    if (resultado%2 == 0)
        printf("o resultado e: %d e o numero e par!\n",resultado);
    else
        printf("o resultado e: %d e o numero e impar!\n", resultado);
    return 0;

}
