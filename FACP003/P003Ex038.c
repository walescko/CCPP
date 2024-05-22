//
// Created by walescko on 5/22/24.
//
#include <stdio.h>
#include <stddef.h>
int main(void){
    size_t alinha_c = __alignof__(char);
    size_t alinha_i = __alignof__(int);
    size_t alinha_d = __alignof__(double);
    printf("%zd %zd %zd\n", alinha_c, alinha_i, alinha_d);

    return 0;
}