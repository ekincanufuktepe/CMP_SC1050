#include<stdio.h>

int main() {

    const int x = 5;
    const int* const xPtr = NULL;
    xPtr = &x;
    // x = 5;
    *xPtr = *xPtr + 2;
    printf("x: %d\n", x);
    // x++;
    // printf("x: %d\n", x);
    return 0;
}