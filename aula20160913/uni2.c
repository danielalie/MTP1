#include<stdio.h>
union uniao {
    int i;
    float f;};

int main ()
{
    union uniao numero;
    char opcao;
    do {
    printf("voce quer entrar com (i)nt ou (f)loat?");
    scanf("%c", &opcao);
    fflush (stdin);
    } while (opcao!='i' && opcao !='I' && opcao !='f' && opcao != 'F');
    if (opcao == 'i' || 'I')
    {
        printf ("Entre com o int: ");
        scanf ("%d", &numero.i);
        printf ("como float: %e\n", numero.f);
    }

    else
    { //opcao=='f' ou 'F'
            printf ("Entre com o float: ");
            scanf ("%f", &numero.f);
            printf ("como int: %d\n", numero.i);
    }

    return 0;
}
