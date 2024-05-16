//
// Created by walescko on 5/16/24.
//
#include <stdio.h>

void imp_ini (void){

    printf("Impressão de cabeçalho!\n");

}

void imp_end(void){

    printf("Impressão de rodapé\n");

}

int main (void){

    int x;
    imp_ini();

    printf("Entre com um valor numérico inteiro: ");
    scanf("%d", &x);

    printf("O dobro de %d é %d\n", x, (2*x));

    imp_end();

    return 0;
}
