#include<stdio.h>//TERMINAR

int soma(int A, int n);
int main()
{
    int A[15] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int n = sizeof(A)/sizeof(int);
    printf("soma = %d", n, soma(A,n));
    return 0;
}
int soma (int A, int n)
    {
        int s;
        s = n + soma(n-1);
        return 0;
    }

