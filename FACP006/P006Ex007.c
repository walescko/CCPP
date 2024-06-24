#include <stdio.h>
#include <complex.h>
int main(void){
    double _Complex x = 2.0 + 3.0i;
    double _Complex y = 5.0 + 4.0i;
    double _Complex a = a + y;
    double _Complex b = x - y;
    double _Complex c = x * y;
    double _Complex d = x / y;
    printf("(%f + %fi)\n", creal(a), cimag(a));
    printf("(%f + %fi)\n", creal(b), cimag(b));
    printf("(%f + %fi)\n", creal(c), cimag(c));
    printf("(%f + %fi)\n", creal(d), cimag(d));
}