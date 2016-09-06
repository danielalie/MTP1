#include<stdio.h>
#include<math.h>
int main ()
{
    double lado1, lado2, lado3, angulorad;
    printf("informe o lado 1 do triangulo: ");
    scanf ("%lf", &lado1);
    printf ("informe o lado 2 do triangulo: ");
    scanf ("%lf", &lado2);
    printf ("informe o angulo entre os lados 1 e 2, em radianos: ");
    scanf ("%lf", &angulorad);
    lado3 = sqrt (pow(lado1,2)+pow(lado2,2)-2*lado1*lado2*cos(angulorad));
    printf("o lado que falta e = %f", lado3);
    return 0;
}
