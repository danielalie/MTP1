#include<stdio.h> // ARRUMAR
#define N 2
#define M 4

void recebematriz (float matriz[N][M]);
void imprimir (float matriz [N][M]);
void imprimirtransp (float matriz [M][N]);
void transpor (float matriz [N][M], float transposta [M][N]);


int main ()
{
    float matriz[N][M], transposta [M][N];
    recebematriz (matriz);
    imprimimatriz (matriz);
    transpor (matriz, transposta);
    printf ("a transposta e: \n");
    imprimirtransp (transposta);
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

void imprimir (float matriz [N][M])
{
    int i, j;
    printf ("\n matriz %dx%d: \n", N, M);
    for (i=0; i<N; i++)
        for(j=0;j<M;j++)
    printf ("%g%c", matriz [i][j], (j != M -1) ? '\t':'\t');
}

void imprimirtransp (float matriz [M][N])
{
    int i, j;
    printf ("\n matriz %dx%d: \n", M, N);
    for (i=0; i<M; i++)
        for(j=0;j<N;j++)
    printf ("%g%c", matriz [i][j], (j != N -1) ? '\t':'\t');
}

void transpor (float matriz [N][M], float transposta [M][N])
{
    int i, j;
    for (i=0; i<N; i++)
        for(j=0;j<M;j++)
            transposta[j][i]=matriz[i][j];
}
