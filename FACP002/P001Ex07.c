//
// Created by walescko on 5/7/24.
//
#include <stdio.h>
int main (void) {
    int qtd = 2, tax;
    double soldo;
    printf("Qual o salário? ");
    scanf("%lf", &soldo);
    printf("Qual a taxa? ");
    scanf("%d", &tax);
    printf("Qual a quantidade? ");
    scanf("%d", &qtd);

    printf("\nQuantidade: ¢d \nTaxa: %d\nSalário: R$ %lf\n", qtd, tax, soldo);

}
