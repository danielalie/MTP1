
#include <stdio.h>

int calcular(int a, int n);
int main ()
{
    int a, n, resultado;
    printf("Digite o numero de bolas: \n");
    scanf("%d", &a);
    fflush(stdin);
    printf("Digite o numero de bolas que deseja retirar: \n");
    scanf("%d", &n);
    fflush(stdin);
    resultado=calcular(a,n);
    if (calcular(a,n)==0)
         printf("Erro!\n");
    else
        printf("O numero de combinacoes e: %d \n", resultado);
    return 0;
}

int calcular(int a, int n)
{
    if (n>a)
        return 0;
    if (n==0)
        return 1;
    else
    {
        int resultado;
        resultado=(a*(calcular(a-1,n-1)))/n;
        return resultado;
    }
}
