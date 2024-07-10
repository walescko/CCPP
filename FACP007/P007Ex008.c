#include <stdio.h>
int main(void){
    int a;
    
    printf("Entre com um número inteiro: ");
    scanf("%d", &a);
    
    switch(2 + a) {
    case 23:printf("Primeiro\n");
        default
        case 5 * 9 / 3:
        case 2: printf("Segundo\n");
        case 4: printf("Terceiro\n");
    }

    printf("fim\n");
    return 0;

}