#include<stdio.h>

int main() {

    int x = 5;
    int* xPtr = NULL;
    int** xDPtr = NULL;
    int*** xTPtr = NULL;

    xPtr = &x;
    xDPtr = &xPtr;
    xTPtr = &xDPtr;

    printf("x: %d\n", x);
    printf("xPtr: %d\n", *xPtr);
    printf("xDPtr: %d\n", **xDPtr);
    printf("xTPtr: %d\n", ***xTPtr);

    return 0;

}