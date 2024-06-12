//
// Created by walescko on 6/12/24.
//
#include <stdio.h>
int main (void){
    int pi = 3, p2 = pi;
    struct {
        char p1;
        int p2;
    } reg;
    scanf("%d", &p2);
    p1: printf("exemplo %d\n", p2);
        if (p2 >10){
            p2 = p2 - 1;
            goto p2;
        }
        reg.p1 = 'a';
        reg.p2 = p2;
//tem um trecho de código aqui que não aparece no livro-texto
        return 0;
    
        
    

}
