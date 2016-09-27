#include<stdio.h>//TERMINAR

struct fracao
{
    int num;
    int den;
};

struct fracao divisao  (int num1, int den1, int num2, int den2);
int main ()
{
    struct fracao resposta;
    int num1, den1, num2, den2;
    printf ("entre com o numerador e denominador: ");scanf ("%d/%d", &num1, &den1);
    printf ("entre com o numerador e denominador: ");scanf ("%d/%d",&num2, den2);
    resposta=divisao(num1,den1,num2,den2);
    printf("soma: %d\n", resposta.soma);
    return 0;
}

struct fracao divisao  (int num1, int den1, int num2, int den2)
{
    struct fracao resposta;
    resposta.soma = (num1/den1)+(num2/den2);
    return resposta;

}
