#include<stdio.h> // TERMINAR DEPOIS - user memoria heap para guardar os caracteres que o usuario digita
#include<stdlib.h>
char * inicializatexto ();
char * recebetexto (char*texto);

int main ()
{
    char * texto;
    texto=inicializatexto ();
    printf("entre com o texto (entre com # e enter para sair): ");
    texto=recebetexto(texto);
    printf("\n: o que tem na HAP: \n");
    printf("%s\n", texto);
    free(texto);
    return 0;
}


char * inicializatexto ()
{
    char * texto;
    texto = (char*) malloc (sizeof (char));
    texto [0]='\0';
    return texto;
}

char * recebetexto (char*texto) //modificar ponteiro, crescendo a variavel
{
    int c, tamanho=0;
    do
    {
       c=getchar();
       if  (c!='#')
       {
            tamanho++;
           texto = (char *) realloc(texto,tamanho*sizeof(char));
           texto[tamanho] = '\0';
           texto[tamanho-1]= c;
       }
    }
    while (c!='#');
    return texto;
}
