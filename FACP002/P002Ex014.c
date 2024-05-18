//
// Created by walescko on 5/17/24.
//
#include <stdio.h>
#include <math.h>
int main (void){

    double a, b, c, delta, x1, x2;

    printf("Resolução do Equação do II Grau \n\n");
    printf("Termo quadrático (a): ");
    scanf("%lf", &a);
    printf("Termo linear (b): ");
    scanf("%lf", &b);
    printf("Termo independente (c): ");
    scanf("%lf", &c);
    printf("\n\nEquação: %f x² + %f x + %f = 0\n", a, b, c);

    delta = - pow(b,2) - 4*a*c;
    printf("%f", delta);

    if (delta < 0) {
        printf("Não existe raízes reais!");
    } if (delta == 0){
        x1 = (-b + delta)/ (2*a);
        printf("Existe uma raiz real: x = %f", x1);
    } else {
        x1 = (-b + delta)/ (2*a);
        x2 = (-b - delta)/ (2*a);
        printf("Existe duas raízes reais distintas.\n");
        printf("x1 = %f.\n", x1);
        printf("x2 = %f.\n", x2);
    }
    return 0;
}