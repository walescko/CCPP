#include <stdio.h>
int main(void){
    int a = 2, b, c;
    b = (a = 3) * 2;
    c = a + b;
    printf("%d %d %d\n", a, b, c);
    return 0;
}