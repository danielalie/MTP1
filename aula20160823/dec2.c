#include<stdio.h>
#include<time.h>
int main ()
{
    srand (time (0));
    int numsorteado, numdigitado, resultado;
    numsorteado = rand ()%1 + 1;
    printf ("numero sorteado: %d\n", numsorteado);
    printf("digite um numero inteiro nao negativo: ");
    scanf ("%f", &numdigitado);
    resultado = numdigitado+numsorteado;
    printf("Resultado: %d\n", resultado);
    if (resultado%2 == 0)
        printf("o numero e par!\n");
    else
        printf("o numero e impar!\n");
    return 0;

}
