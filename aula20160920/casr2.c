#include<stadio.h>//TERMINAR (FEITO EM SALA)
#include<>//VER DEPOIS
#include<>//VER DEPOIS

void recebe_dado (char tipo, void * endereco)
int main ()
{
    int i; float f; char c;
    printf ("Entre com inteiro: "); recebe_dado('i',&i);
    printf ("Entre com float"); recebe_dado('f',&f);
    printf ("Entre com caractere "); recebe_dado('c',&c);
    printf("quadrado: %d\n", i*i);
    printf("raiz: %f\n",sqrt(f));
    printf ("caractere: %c\n", (isupper(c)))
    return 0;
}
void recebe_dado(char tipo, void * endereco)
{
    int c;
    switch (tipo)
    {
        case 'i':scanf("%d",(int*)endereco); break;
        case 'f':scanf("%f",(float*)endereco); break;
        case 'c':scanf("%c",(char*)endereco); break;
    }
    while ((c = getchar()) != EDF && c !=='\n');
}
