#include<stdio.h>

int main() {

    int x = 2;
    x = x * x;

    #if 1
        x = x + 1;
    #endif

    printf("x: %d\n", x);

    return 0;
}