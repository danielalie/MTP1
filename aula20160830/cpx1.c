#include<stdio.h>
#include<complex.h>
int main ()
{
    double complex z1, z2, soma;
    double R_z1, R_z2, I_z1, I_z2;
    printf ("real de z1: "); scanf ("%f", &R_z1);
    printf ("imaginario de z1: "); scanf ("%f", &I_z1);
    printf ("real de z2: "); scanf ("%f", &R_z2);
    printf ("imaginario de z2: "); scanf ("%f", &I_z2);
    z1 = R_z1 + I_z1*I;
    z2 = R_z2 + I_z2*I;
    soma = z1 + z2;
    printf("soma: %lf+ %lf*I\n", creal (soma), cimag (soma));

    return 0;
}
