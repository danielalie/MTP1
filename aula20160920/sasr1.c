#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void fala();
int main ()
{
    srand(time(0));
    char msg[256]; // captura frases do usuario
    printf ("** ola, vamos iniciar uma conversa :)\n");
    do
    {
        fgets(msg, sizeof(msg), stdin);
        fala();
    } while (strncmp(msg, "tchau",5) !=0);
    return 0;
}

void fala ()//fun�ao do tipo void: nao retorna nada
{
    int qualfala = rand()%7;
    switch(qualfala)
    {
        case 0: printf("** Tudo bem?\n");
            break;
        case 1: printf ("** Ok\n");
            break;
        case 2: printf ("** LOL!\n");
            break;
        case 3: printf ("** Que legal\n");
            break;
        case 4: printf ("** Que chato\n");
            break;
        case 5: printf ("** Fale mais sobre isso\n");
            break;
        case 6: printf ("**Sobre o que quer falar?\n");
            break;
    }
}
