#include<stdio.h> //TERMINAR
int main ()
{
    int vetor [10], i;
    printf ("\ninsira 10 numeros: ");

    for (i=0; i!=10; i++)
    {
        scanf ("%d", &vetor[i]);
    }
    void inverte (int vetor[], int n)
    {
        int i=0, aux;
        for (int j=n-1; j>(n-1)/2; j--)
        {
            aux=vetor[i];
            vetor[i]=vetor[j];
            vetor[j]=aux;
            i++;
        }
        printf (" ordem invertida: %f\n", inverte)
    }
    return 0;
}
