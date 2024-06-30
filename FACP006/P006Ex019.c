#include <stdio.h>
int main(void){
    int i = 20, j;
    j = i > 30 ? 2 + i : 2 * i;
    printf("%d\n", j);
    j = i < 30 ? 2 + i : 2 * i;
    printf("%d\n", j);
    return 0;
}