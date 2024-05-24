#include <stdio.h>
#include <stddef.h>

int main(void){

    char c1 = '\x7F';
    wchar_t c2 = L'\xFFFF';
    
    printf("%c %hhd\n", c1, c1);
    printf("%c %d\n", c2, c2);

    return 0;

}