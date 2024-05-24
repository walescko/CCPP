#include <stdio.h>

int main(void){
    
    enum {peao, cavalo, bispo, torre, rainha, rei} peca;
    
    printf("Digite o código da peça: ");
    scanf("%d", (int *)&peca);
    printf("Peça lida: %d\n", peca);
    
    if (peca < rainha){
        peca++;
        printf("Peça Promovida: %d\n", peca);

    }

    return 0;


}