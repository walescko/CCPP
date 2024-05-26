//
// Created by walescko on 5/25/24.
//
#include <stdio.h>
int main(void){
    int res;
    int num;
    scanf("%d", &num);
    res = num > 4;
    if (res == 1) {
        printf("num > 4\n");
    }
    return 0;
}