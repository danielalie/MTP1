#include<stdio.h>
#include<math.h>
int main ()
{
    float p1_x, p1_y, p2_x, p2_y, distancia;
    printf ("coordenada x de p1: ");
    scanf("%f", &p1_x);
    printf ("coordenada y de p1: ");
    scanf("%f", &p1_y);
    printf ("coordenada x de p2: ");
    scanf("%f", &p2_x);
    printf ("coordenada y de p2: ");
    scanf("%f", &p2_y);
    distancia = sqrt (pow(p2_x-p1_x,2.)+pow(p2_y-p1_y, 2.));
    printf ("distancia entre os pontos: %f", distancia);
    return 0;
}
