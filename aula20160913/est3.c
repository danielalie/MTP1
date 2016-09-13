#include<stdio.h>// TERMINARRRR
#include<string.h>

#define QUANTIDADE = 10

int main ()
{
    struct cadastro
    {
        char nome[50];
        char idade [20];
        char telefone [20];
    };

    cadastro.nome;
    cadasro.idade;
    cadastro.telefone;

    int opcao = 1;
    do{

        printf("\n CADASTRO:\n\n");

        printf("\n digite nome:");
        scanf("%s", &cadastro.nome);
        fflush(stdin);
        printf("\n digite idade: ");
        scanf ("%d", &cadastro.idade);
        fflush (stdin);
        printf("\n digite telefone: ");
        scanf ("%d", &cadastro.telefone);
        fflush (stdin);
        printf ("\n\n");
        printf("\n nome: %s\n", cadastro.nome);
        printf("\n idade: %d \n", cadastro.idade);
        printf("\n telefone: %d", cadastro.telefone);
        printf ("\n\n");

        printf("digite 1 para novo cadastro ou 0 para sair: ");
        scanf ("%d", &opcao);
    }

    while (opcao==1);
    return 0;

    }
