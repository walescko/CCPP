//Author: Tiago Walescko Chimendes ; create in 05/07/2024
#include <stdio.h>
int main(void){
    int a;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &a);
    printf("\nO número digitado é: %d\n", a);
    if (a > 30) {
        printf("%d é maior que 30.\n", a);
        a = a - 30; //aqui é a geração de um erro que irá impactar o próximo comando, quando entrar no if
    }
    printf("%d é menor ou igual a 30.\n", a);
    return 0;
}
