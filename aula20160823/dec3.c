#include<stdio.h>
#include<time.h>
int main ()
{
  srand (time(0));
  int dado1, dado2, dado3, resultado;
  dado1 = rand () %6 +1;
  printf ("dado 1: %d\n", dado1);
  dado2 = rand () %6 +1;
  printf ("dado 2: %d\n", dado2);
  dado3 = rand () %6 +1;
  printf ("dado 3: %d\n", dado3);
  resultado = dado1+dado2+dado3;
  printf("resultado: %d\n", resultado);
  if (resultado==7 || resultado==11)
    printf("VOCE GANHOU\n");
  else
    printf ("VOCE PEEEEEEERDEUUUU\n");
  return 0;
}
