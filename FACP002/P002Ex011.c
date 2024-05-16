//
// Created by walescko on 5/16/24.
//
#include  <stdio.h>
#include <math.h>

int main (void){
    double x, r, p;

    printf("Potenciação e Radiciação\n");
    printf("Entre com um valo numérico: ");
    scanf("%lf", &x);

    r = sqrt(x);
    p = pow(x, 3);

    printf("Raiz de %f é %f\n", x, r);
    printf("O cubo de %f é %f\n", x, p);

    return 0;

}