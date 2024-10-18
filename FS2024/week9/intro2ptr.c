#include<stdio.h>

int main() {

    // int *countPtr, count;
    int count = 0;
    // int *countPtr = NULL;
    int* countPtr;
    countPtr = NULL;
    int x = 6;

    // int* countPtr = 5;

    // int* countPtr;
    // countPtr = 5;

    count = 5;
    countPtr = &count;

    printf("Address of count: %p\n", &count);
    printf("Value of countPtr: %p\n", countPtr);

    printf("Value of count: %d\n", count);
    printf("Deref. of countPtr: %d\n", *countPtr);

    count++;

    printf("Value of count: %d\n", count);
    printf("Deref. of countPtr: %d\n", *countPtr);

    // (*countPtr)++;
    ++*countPtr;

    printf("Value of count: %d\n", count);
    printf("Deref. of countPtr: %d\n", *countPtr);

    printf("Address of countPtr: %p\n", &countPtr);
    printf("Address of x: %p\n", &x);

    return 0;
}