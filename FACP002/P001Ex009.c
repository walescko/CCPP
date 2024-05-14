//
// Created by walescko on 5/14/24.
//
#include <stdio.h>
int main (void){
    int x, y;
    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    printf("Digite outro número inteiro: ");
    scanf("%d", &y);
    printf("O maior número digitado é: ");
    if (x > y){
        printf("%d\n", x);
    } else {
        printf("%d\n", y);
    }

}