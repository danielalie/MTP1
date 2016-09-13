#include<stdio.h>// VER DEPOIS NO SITE
#include<string.h>
#define TIPO(x) \

typedef enum {INTEGER = 1, STRING = 2 , FLOAT =3} Type;
typedef struct {
Type tipo; //union sempre tem um tipo e um dado (ta embaixp)
union {
    int i;
    char s[256];
    float f;
    }dado;
}Desconhecido;

int main ()
{

}
