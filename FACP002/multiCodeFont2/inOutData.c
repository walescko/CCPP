//
// Created by walescko on 5/19/24.
//
#include <stdio.h>
#include "inOut.h"

double a, b, c, delta, x1, x2;
void dataRead (void) {

    printf("Resolução do Equação do II Grau \n\n");
    printf("Termo quadrático (a): ");
    scanf("%lf", &a);
    printf("Termo linear (b): ");
    scanf("%lf", &b);
    printf("Termo independente (c): ");
    scanf("%lf", &c);
    printf("\n\nEquação: %f x² + %f x + %f = 0\n", a, b, c);

}

void dataPrint (void){

    if (delta >= 0){
        printf("Existe duas raízes reais distintas.\n");
        printf("x1 = %f.\n", x1);
        printf("x2 = %f.\n", x2);
    } else {
        printf("Não existe raízes reais!");
    }
}