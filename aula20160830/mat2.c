#include<stdio.h>
#include<math.h>
int main ()
{
    float lado1, lado2, lado3, angulorad;
    float cos (float angulorad);
    printf("informe o lado 1 do triangulo: ");
    scanf ("%f", &lado1);
    printf ("informe o lado 2 do triangulo: ");
    scanf ("%f", &lado2);
    printf ("informe o angulo entre os lados 1 e 2, em radianos: ");
    scanf ("%f", &angulorad);
    lado3 = sqrt ((lado1*lado1)+(lado2*lado2)-(2*lado1*lado2*cos(angulorad)));
    printf("o lado que falta e = %f", lado3);
    return 0;
}
