#include <stdio.h>
#include <complex.h>
int main(void){
    short int a = 25;
    _Bool b1, b2;
    float _Complex c = 25 + 0 * I;
    float _Complex d = 25 + 3 * I;
    b1 = (a == c);
    b2 = (c == d);
    printf("%d %d\n", b1, b2);
    return 0;

}