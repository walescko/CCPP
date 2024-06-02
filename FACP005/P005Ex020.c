#include <stdio.h>
int  *lit1 = (int[]) {1, 2, 3};
int main(void){
    
    int x;
    
    scanf("%d", &x);
    
    int *lit2 = (int[3]){1+x, 2, 3};
    
    const int lit3 = (const int){851};
    const int lit4 = (const int) {851};
    
    if (lit3 == lit4){
        printf("literais compartilhados\n");
    }
    
    return 0;
}