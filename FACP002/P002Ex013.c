//
// Created by walescko on 5/17/24.
//
#include <stdio.h>
int x;
void dataRead(void){
    printf("Entre com um valor inteiro: ");
    scanf("%d", &x);
}

void dataPrint(void){
    printf("O dobro do número %d é %d!", x, (2*x));
}

int main (void) {
    dataRead();
    dataPrint();
    printf("\nFim do programa!\n");
    return 0;
}