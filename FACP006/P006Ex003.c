//
// Created by walescko on 6/24/24.
//
#include <stdio.h>
int main(void){
    int a, b; double c, d; float e, f;
    a = 3 * 2;
    b = 9 / a;
    c = 3 * 2.0;
    d = 9.0 / a;
    e = 2 + 3 *(a / 2.0F);
    f = 2 * e;
    printf("%d %d %f\n", a , b ,c);
    printf("%f %f %f\n", d, e , f);
    return 0;
}