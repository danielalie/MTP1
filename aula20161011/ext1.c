#include<stdio.h>//TERMINAR PRA ACHAR O MAIOR E MENOR
#include<stdlib.h>

void recebenumeros (float * numeros, int qtnumeros);
float media (float * numeros, int qtnumeros);

int main ()
{
    int qtnumeros;
    float *numeros;
    printf ("informe a quantidade de numeros: ");
    scanf ("%d", &qtnumeros);
    numeros=malloc(qtnumeros*sizeof(float));
    recebenumeros (numeros, qtnumeros);
    printf ("media: %g \n", media (numeros, qtnumeros));
    free (numeros);
    return 0;
}

void recebenumeros (float * numeros, int qtnumeros)
{
    int i;
    for (i=0; i<qtnumeros; i++)
    {
        printf ("entre com o numero: ", i);
        scanf ("%f", &numeros[i]);
    }
}

float media (float * numeros, int qtnumeros)
{
    float soma = 0.f;
    int i;
    for (i=0; i<qtnumeros; i++) soma += numeros [i];
    return soma/qtnumeros;
}

