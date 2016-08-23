#include<stdio.h>
int main ()
{
    float basetriangulo, alturatriangulo, areatriangulo;
    printf("Base e altura do triangulo, respectivamente: ");
    scanf ("%f",&basetriangulo);
    scanf ("%f",&alturatriangulo);
    areatriangulo=(basetriangulo*alturatriangulo)/2;
    printf("Area do triangulo: %f", areatriangulo);
    return 0;
}
