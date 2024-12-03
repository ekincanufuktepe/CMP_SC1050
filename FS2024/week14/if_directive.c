#include<stdio.h>

// #define FEATURE

int main() {

    int x = 2;
    x = x * x;
    #if 1
        x = x + 1;
    #endif

    printf("x: %d\n", x);

    printf("End of program!\n");
    return 0;
}