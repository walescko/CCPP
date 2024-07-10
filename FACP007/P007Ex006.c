#include <stdio.h>
int main (void){
    int a, b;

    printf("Entre com dois valores inteiros:\n");
    printf("Primeiro Número: ");
    scanf("%d", &a);
    printf("Segundo Número: ");
    scanf("%d", &b);

    if (a == b) {

    } else {
        if (a > b) {
            printf("%d\n", a);
        } else {
            printf("%d\n", b);
        }
    }
    return 0;
}