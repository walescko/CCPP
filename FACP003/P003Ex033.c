//
// Created by walescko on 5/22/24.
//
#include <stdio.h>
#include <complex.h>
int main (void){

    double a = 234.45;
    float _Complex c = a;

    printf("%f -> (%f + %f i)\n", a, creal(c), cimag(c));

    return 0;

}
