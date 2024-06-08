#include <stdio.h>
extern int valor;
int aux = 10;
int main (void){
    printf("%d\n", valor);
    int valor = 4;
    printf("%d\n", valor);
    if (aux > 2){
        extern int valor;
        printf("%d\n", valor);
        }
    printf("%d\n", valor);
    return 0;
    }
