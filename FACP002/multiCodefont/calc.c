//
// Created by walescko on 5/19/24.
//
#include <stdio.h>
#include <math.h>
extern double a, b, c, delta, x1, x2;
void deltaCalc(void){
    delta = pow(b, 2.0) - 4.0*a*c;
}
void roorCalc(void) {
    deltaCalc();
    if (delta >= 0.0){
        x1 = -b + sqrt(delta)/2*a;
        x2 = -b - sqrt(delta)/2*a;
    }
}