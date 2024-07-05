#include <stdio.h>
int main(void){
    int i = 10, j = 3;
    j = i + (i = j +2);
    printf("%d %d\n", i, j);
    return 0;
}