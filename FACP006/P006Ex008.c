#include <stdio.h>
int main(void){
    _Bool a, b, c, d;
    a = (2 > 3);
    b = ((2-7) >= -5);
    c = (b != b);
    d = (a == b);
    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}