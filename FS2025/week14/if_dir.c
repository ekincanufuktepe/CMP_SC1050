#include<stdio.h>

int main() {

    int x = 2;
    x = x * x;

    // add a comment
    #if 0
        x = x + 1;
    #endif

    printf("x: %d\n", x);

    return 0;
}