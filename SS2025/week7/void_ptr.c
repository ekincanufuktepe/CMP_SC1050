#include<stdio.h>

int main() {

    int x = 5;
    char c = 'a';

    int* xPtr = NULL;
    char* cPtr = NULL;

    xPtr = &x;
    printf("Address size of c: %ld\n", sizeof(&c));
    cPtr = &c;
    printf("Address size of x: %ld\n", sizeof(&x));

    void* p = NULL;

    // p = xPtr;
    p = &x;
    printf("Reading int data from void*: %d\n", *((int*)p));

    p = cPtr;
    printf("Reading char data from void*: %c\n", *((char*)p));

    return 0;
}