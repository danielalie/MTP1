#include<stdio.h>
#include <time.h>
#define N 10000
int main ()
{
    srand (time(0));
    int numero, i;
    int vetor [N];
    float soma=0.0f;
    printf ("numero inteiro nao negativo: ");
    scanf ("%d", &numero);
    for (i=0; i<N; i++)
        vetor [i] = rand()%numero+1;//entre 1 e o numero aleatorio
    for (i=0; i<N; i++)
        soma=soma+vetor[i];
    printf ("media dos numeros: %g\n", soma/N);
    return 0;
}
