//
// Created by walescko on 5/22/24.
//
#include <stdio.h>
#include <complex.h>
int main (void){
    double _Complex c = 234.45 + 2.5*I;
    float a = c;
    printf("(%f + %f i) -> %f\n", creal(c), cimag(c), a);

    return 0;
}