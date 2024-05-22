//
// Created by walescko on 5/22/24.
//
#include <stdio.h>
#include <complex.h>
int main (void){

    double _Complex c = 234.45 + 2.5*I;
    float _Complex d = c;

    printf("(%f + %f i)\n", creal(d), cimag(d));

    return 0;
}
