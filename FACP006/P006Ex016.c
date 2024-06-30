#include <stdio.h>
int main(void){
    short int a = 123, b = 20;
    int c = a & b;
    int d = a | b;
    int e = a ^ b;
    int f = ~a;
    printf("%d %d", a , b);
    printf("%d %d %d %d", c, d, e, f);
    return 0;
}