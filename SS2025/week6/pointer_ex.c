#include<stdio.h>

int main() {

    int y = 3;
    int* yPtr = &y; // less vague inline definition and initialization

    int *xPtr = NULL;
    int x = 5;

    xPtr = &x;

    printf("x:%d, *xPtr:%d\n", x, *xPtr);

    *xPtr = *xPtr * 2;
    
    printf("x:%d, *xPtr:%d\n", x, *xPtr);

    return 0;
}