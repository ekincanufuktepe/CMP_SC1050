#include<stdio.h>

int main() {

    int *countPtr = NULL;
    int count = 7;

    countPtr = &count;

    printf("Value of count: %d\n", count);
    printf("Address of count: %p\n", &count);

    printf("Dereferenced countPtr: %d\n", *countPtr); // dereferecing
    printf("Value of countPtr: %p\n", countPtr);
    printf("Address of countPtr: %p\n", &countPtr);

    //printf("Sizeof countPtr: %ld\n", sizeof(countPtr));
}