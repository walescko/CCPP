#include <stdio.h>
imt main(void){
    int i = 10, j = 3;
    j *= 2 + i;
    i += 3 * (j -= 2);
    printf("%d %d\n", i, j);
    return 0;
}