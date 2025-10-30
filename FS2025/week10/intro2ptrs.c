#include<stdio.h>

int main() {
    int x = 5;
    int* xPtr = NULL; // same as int *xPtr = NULL;
    // xPtr = NULL;

    xPtr = &x;

    if(xPtr) {
        printf("xPtr: %p\n", xPtr);
        printf("*xPtr: %d\n", *xPtr);

        x++;

        printf("xPtr: %p\n", xPtr);
        printf("*xPtr: %d\n", *xPtr);

        ++*xPtr;

        printf("xPtr: %p\n", xPtr);
        printf("*xPtr: %d\n", *xPtr);

        printf("x: %d\n", x);

    }

    return 0;
}