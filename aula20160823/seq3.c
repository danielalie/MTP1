#include<stdio.h>
int main ()
{
    float notaA, notaB, notaC, media;
    printf("informe as notas A, B e C, respectivamente:");
    scanf("%f",&notaA);
    scanf("%f", &notaB);
    scanf("%f", &notaC);
    media=(notaA*2+notaB*3+notaC*5)/10;
    printf("media: %f", media);
    return 0;
}
