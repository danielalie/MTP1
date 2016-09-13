#include<stdio.h>
#include<math.h>

#define RECEBEPONTO(c, ponto)\
    ({ printf("Entre coord x de %c:", c); \
    scanf ("%f", &ponto.x);\
    printf("Entre coord y de %c:", c); \
    scanf ("%f", &ponto.y); })

#define MOSTRAPONTO(ponto) \
    ({printf ("( %g;%g)\n", ponto.x, ponto.y); })

#define SOMA(ptA, ptB, soma) \
    ({ soma.x = ptA.x + ptB.x;\
       soma.y = ptA.y + ptB.y;})

#define DISTANCIA(ptA, ptB, d)\
    ({d=sqrt(pow(ptA.x-ptB.x,2.f)+\
         pow(ptA.y-ptB.y,2.f));})

struct ponto
    {
    float x;
    float y;};

int main ()
{
    struct ponto A, B, S;
    float distancia;
    RECEBEPONTO ('A',A);
    RECEBEPONTO('B',B);
    SOMA(A,B,S);
    MOSTRAPONTO(S);
    DISTANCIA(A, B, distancia); printf("distancia entre os pontos: %g", distancia);
    return 0;
}
