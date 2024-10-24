#include<stdio.h>

int main() {

    char c = 'a';
    int x = 999999999;
    int* xPtr;
    xPtr = &x;

    char* cPtr = NULL;
    cPtr = &c;

    void* vPtr = NULL;

    vPtr = xPtr;

    printf("*xPtr: %d\n", *xPtr);
    printf("*cPtr: %c\n", *cPtr);
    printf("*vPtr: %d\n", *((int*)vPtr));

    int array[5] = {0};
    int* arrayPtr = NULL;
    arrayPtr = array;

    printf("sizeof arrayPtr: %d\n", (int)sizeof(arrayPtr));

    return 0;
}