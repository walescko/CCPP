#include <stdio.h>
int main(void){
    int a, b, c;

    printf("Entre com três números inteiros\rn");
    printf("Primeiro Número: ");
    scanf("%d", &a);
    printf("Segundo Número: ");
    scanf("%d", &b);
    printf("Terceiro Número: ");
    scanf("%d", &c);

    if (a > b){
        if (b > c){
            printf("%d %d %d\n", c, b, a);
        } else {
            if (a > c){
                printf("%d %d %d\n", b, c, a);
            } else {
                printf("%d %d %d\n", b, a , c);
            }
        }
    } else {
        if (a > c) {
            printf("%d %d %d\n", c, a, b);
        } else {
            if (b > c){
                printf("%d %d %d\n", a, c, b);
            } else {
                printf("%d %d %d\n", a, b, c);
            }
        
        }
    }
    printf("fim\n");
    return 0;
}