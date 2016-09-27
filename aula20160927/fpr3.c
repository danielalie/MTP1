#include<stdio.h>

int main()
{

    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int n = sizeof(A)/sizeof(int);
    int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int m = sizeof(B)/sizeof(int);
    int C[7], i=0, x=0, z=0;

     printf("Os elementos comuns entres os vetores sao: \n\n");
     for(i=0;i<15;i++){
       for(x=0;x<11;x++){
         if(A[i] == B[x]){
              C[z++] = A[i];
         }
       }
     }

     for(i=0;i<z;i++){
           printf("%d\t",C[i]);
     }
    return 0;
}
