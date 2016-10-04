#include<stdio.h> // ARRUMAR
#define N 2
#define M 4

void recebematriz (float matriz[N][M]);

int main ()
{
    float matriz[N][M];
    recebematriz (matriz);

    return 0;
}

void recebematriz (float matriz[N][M])
{
    int i, j;
    for (i=0; i<N; i++)
        for(j=0; j<M; j++)
        {
        printf ("entre com o elemento (%dx%d", i, j);
        scanf ("%f", &matriz[i][j]);
        }
}

void imprime (float matriz [N][M])
{
    int i, j;
    for (i=0; i<N; i++)
        for(j=0; j<M; j++)
            printf ("%g\c", matriz[i][j])
}
