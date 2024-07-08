#include <stdio.h>
int main(void){
    int a, b, c;

    printf("\nDigite três números inteiros:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    if (a > b) {
        printf(" 1 \n");
    } else {
        if (b > c) {
            printf(" 2 \n");
        } else {
            printf(" 3 \n");
        }
    }
    return 0;
}