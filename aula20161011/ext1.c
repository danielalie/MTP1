
#include <stdio.h>
#include <stdlib.h>
float *recebenumero (float *vetor, int *tamanho);
int main ()
{
    float* vetor=NULL;
    int tamanho=0, op;
    do
    {
        vetor= recebenumero(vetor, &tamanho);
        printf("Deseja entrar com um numero? (0-nao; 1-sim.");
    }
    while (op !=0);
    free(vetor);
    return 0;
}

float *recebenumero (float *vetor, int *ptamanho)
{
    (*ptamanho)++;
    if(vetor==NULL)
        vetor= (float*) malloc(sizeof(float));
    else
        vetor= (float*) realloc(vetor, (*ptamanho)*sizeof(float));
    printf("Entre com um numero: ");
    scanf("%f", &vetor[(*ptamanho)-1]);
    return vetor;
}
