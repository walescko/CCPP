//
// Created by walescko on 5/31/24.
//
#include <stdio.h>
void print (double a, int b);
int main(void) {
    int tax = 2, desc = tax;
    double salario = 530.56 *tax;
    print(salario, desc);
    return 0;
}
void print(double sal, int tx){
    printf("%f %d\n", sal, tx);
}
