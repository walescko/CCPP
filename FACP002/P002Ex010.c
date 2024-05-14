//
// Created by walescko on 5/14/24.
//
#include <stdio.h>
int main (void){
    double a, b;
    printf("Equação do primeiro grau\n");
    printf("Entre com o termo linear: ");
    scanf("%lf", &a);
    printf("Entre com o termo independente: ");
    scanf("%lf", &b);
    printf("Equação %fx + %f = 0\n", a, b);
    if (a == 0.0) {
        printf("Nao existe raiz\n");
    } else {
        printf("Raiz = %f\n", -b/a);
    }
    return 0;

}