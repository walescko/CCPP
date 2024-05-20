//
// Created by walescko on 5/20/24.
//
#include <stdio.h>
#include <complex.h>
int main (void){

    double _Complex a = 2.4 + 0.5 * I;
    double _Complex b = 2 * a;

    printf("(%f,  %f i )\n", creal(a), cimag(a));
    printf("(%f,  %f i )\n", creal(b), cimag(b));

    return 0;
}
