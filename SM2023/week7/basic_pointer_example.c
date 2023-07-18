#include<stdio.h>

int main() {

    int y = 5;
    int* yPtr;
    yPtr = NULL;

    yPtr = &y;

    printf("Address of 'y': %p\n", &y);
    printf("Pointer 'yPtr' points at: %p\n", yPtr);

    printf("Value of 'y': %d\n", y);
    printf("Pointer 'yPtr' points at the value: %d\n", *yPtr); // derefencing

    // start updating here!
    //y = y * 3; // a direct modification
    
    // Solution #1
    //*yPtr = y * 3; // semi-direct modification

    // Solution #2
    *yPtr = *yPtr * 3; // indirect modification
    *yPtr = 75;
    
    printf("Value of 'y': %d\n", y);
    printf("Pointer 'yPtr' points at the value: %p\n", *yPtr);

    return 0;
}