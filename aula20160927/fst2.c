#include <stdio.h>

struct fracao
{
    int numerador;
    int denominador;
};

struct fracao soma(int num1, int den1, int num2, int den2);
int main ()
{
    struct fracao resposta;
    int numerador1, denominador1, numerador2, denominador2;
    printf("Entre com o numerador 1: \n");
    scanf("%d", &numerador1);
    fflush(stdin);
    printf("Entre com o denominador 1: \n");
    scanf("%d", &denominador1);
    fflush(stdin);
    printf("Entre com o numerador 2: \n");
    scanf("%d", &numerador2);
    fflush(stdin);
    printf("Entre com o denominador 2: \n");
    scanf("%d", &denominador2);
    fflush(stdin);
    resposta= soma(numerador1, denominador1, numerador2, denominador2);
    printf("A soma e: %d/%d \n",  resposta.numerador, resposta.denominador);
    return 0;
}

struct fracao soma(int num1, int den1, int num2, int den2)
{
        struct fracao resposta;
        resposta.numerador = (num1*den2)+(num2*den1);
        resposta.denominador = (den1*den2);
        return resposta;
};


