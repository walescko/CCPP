//
// Created by walescko on 5/31/24.
//
#include <stdio.h>
const int x = 3;
extern int b;
extern int c = 57;
static int d;
static int e = 23;
int main(void){
    extern int e;
    extern int f;
    static int g;
    static int h = 16;
    int i = 3 + x;
    int j;
    return 0;
}
