#include<stdio.h>
int main ()
{
    int numero;
    printf ("digite um numero inteiro: ");
    scanf("%d",&numero);
    if (numero%2 == 0)
        printf ("numero par\n");
    else
        printf("numero impar\n");
        if (numero%3 == 0)
            printf("e numero multiplo de 3\n");
         if (numero%5 == 0)
            printf("e numero multiplo de 5\n");
            if (numero%7 == 0)
            printf("e numero multiplo de 7\n");
    return 0;
}
