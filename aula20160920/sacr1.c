#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    srand(time(0));
    char i, carta1, carta2; //dados do programa
    int ncartas, cartauser, somauser=0;//dados do usuario
    carta1 = pegacarta ();
    carta2 = pegacarta ();
    printf("quantas cartas?");
    scanf("%d", &ncartas);
    for (i=0;i<ncartas;i++)
    {
        cartauser = pegacarta ();
        printf("%c",mostracarta(cartauser));
        somauser = somauser + cartauser;
    }
    if (somauser>21)
        printf("\nPERDEU\n");
    else {
        if (somauser>carta1+carta2)
            printf("\nGANHOU");
        else
            printf("\nPERDEU");
            printf("\nminhas cartas: %c %c\n", mostracarta(carta1), mostracarta(carta2));
    }
    return 0;
}


    int pegacarta ()
{
    return (rand()%13+1);
}


    int mostracarta(int c)
    {
        char carta;
        switch (c)
        {
            case 1: carta = 'A'; break;
            case 10: carta = 'D'; break;
            case 11: carta = 'J'; break;
            case 12: carta = 'Q'; break;
            case 13: carta = 'K'; break;
            default:
                carta=48+c;
        }
        return carta;
    }
