#include <stdio.h>
int main(void){
    int a;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &a);
    
    printf("\nO número digitado é: %d\n", a);
    if (a > 30) {
        printf("%d é maior que 30.\n", a);
    } 
    printf("%d é menor ou igual a 30.\n", a);

    
    return 0;

}