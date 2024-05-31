//
// Created by walescko on 5/31/24.
//
#include <stdio.h>
int main(void){
    int ind = 12;
    printf("%d\n", ind);
    { float sal = 25.0;
      printf("%f\n", sal);
    }
    printf("%d\n", sal); //ERROR!
    return 0;
}
