#include<stdio.h>
int main ()
{
    int vetor [] = {0,1,2,4,8};
    int tam = sizeof (vetor)/sizeof (int);//sizeof mostra tamanho vetor em bits; 10/4=5 numero elementos
    int contagem = 0;
    unsigned char * ponteiro = NULL;
    ponteiro = (unsigned char *) vetor;//primeiro vetor eh o proprio vetor (vetor=vetor[0])
    for (;ponteiro < vetor + tam ; ponteiro++)
    {
        printf ("%p: %X\n", ponteiro, *ponteiro);//mostra o ponteiro e seu conteudo
        if (*ponteiro == 0x0)
            contagem ++;
    }
    printf ("sao %d os bytes de memoria com apenas 0's.\n", contagem);
    return 0;
}
