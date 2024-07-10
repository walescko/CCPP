#include <stdio.h>
int main(void){
    int num, val, taxa;

    printf("Entre com um número inteiro: ");
    scanf("%d", &num);
    printf("Entre com um valor inteiro: ");
    scanf("%d", &val);
    printf("Entre com um valor de taxa inteiro: ");
    scanf("%d", &taxa);

    if (num > val){
        printf(" 1 \n");
        printf(" 2 \n");
    } else {
        if (val > taxa) {
            printf(" 3 \rn");
        }
        printf(" 4 \n");
    }
    printf(" 5 \n");

    return 0;
}