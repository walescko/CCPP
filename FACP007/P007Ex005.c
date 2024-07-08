#include <stdio.h>
int main(void){
    int num, val, taxa;

    scanf("%d", &num);
    scanf("%d", &val);
    scanf("%d", &taxa);

    if (num > val){
        printf(" 1 \n");
        printf(" 2 \n");
    } else {
        if (val > taxa) {
            printf(" 3 \rn");
        }
        printf(" 4 \n");
    }
    printf(" 5 \n");

    return 0;
}