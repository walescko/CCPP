//
// Created by walescko on 5/31/24.
//
#include <stdio.h>
int main(void){

    double soma = 0.0;

    do {
      double termo = soma;
      printf("%f\n", termo);
      soma = soma + 1.0;
    } while (soma < 15.0);

    printf("%f\n", soma);
    return 0;
}
