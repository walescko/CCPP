//
// Created by walescko on 5/22/24.
//
#include <stdio.h>
#include <float.h>

int main (void){
    double a = 1.000000178813934326171875;
    float b = a;
    float c = DBL_MAX;

    printf("%.25f -> \n%.25f\n", a, b);
    printf("%g -> %f\n", DBL_MAX, c);
    return 0;

}