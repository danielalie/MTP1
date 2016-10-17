#include <stdio.h>

int soma(int *vetor, int n);
int main ()
{
    int vetorA[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int n = sizeof(vetorA)/sizeof(int);
    int resultado;
    resultado=soma(vetorA, n);
    printf("A soma e: %d \n", resultado);
    return 0;
}

int soma(int *vetor, int n)
{
    if (n==0)
        return 0;
    else
    {
        int resultado;
        resultado=soma(vetor, n-1);
        if (vetor[n-1]>0)
            resultado+=vetor[n-1];
        return resultado;
    }
}
