#include <stdio.h>
#include <float.h>
int main(void){
    double a, b, c, d, e, f, g, h, i;
    a = DBL_MIN / DBL_MAX;
    b = 4 / 0.0;
    c = -DBL_MIN / 0.0;
    d = b * c;
    e = b / c;
    f = DBL_MAX / b;
    g = DBL_MAX * b;
    g = b + c;
    i = 0.0 / 0.0;
    printf("%f %f %f\n", a, b, c);
    printf("%f %f %f\n", d, e, f);
    printf("%f %f %f\n", g, h, i);
    return 0;
}