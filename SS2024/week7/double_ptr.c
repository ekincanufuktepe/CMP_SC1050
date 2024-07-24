#include<stdio.h>

int main() {
    int a = 5;
    int* ptr = NULL;
    int** dPtr = NULL;

    ptr = &a;
    dPtr = &ptr;

    printf("Accessing var. a through dPtr: %d\n", **dPtr);
    return 0;

}