#include <stdio.h>
#include <float.h>
int main ()
{
    if (1.0 > (1.0 - DBL_EPSILON*4.0))
        printf ("1 maior que 1-eps\n ");
    else
        printf ("1 nao e maior que 1-eps\n");
    return 0;
}
