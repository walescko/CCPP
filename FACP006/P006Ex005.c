#include <stdio.h>
int main(void){
    double i = 200.0, j = 100.0, k = 2.0;
    printf("%f\n", --i);
    printf("%f\n", i);
    printf("%f\n", j--);
    printf("%f\n", j);
    k = k + --j + i--;
    printf("%f %f %f\n", i, j, k);
    i--; --j;
    printf("%f %f %f\n", i, j, k);
    return 0;
}