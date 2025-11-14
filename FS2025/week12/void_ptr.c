#include<stdio.h>

int main() {

    void* ptr = NULL;

    int x = 5;
    int* xPtr = &x;
    ptr = xPtr;
    printf("int data: %d\n", *((int*)ptr));

    char y = 'a';
    char* yPtr = &y;
    ptr = yPtr;
    printf("char data: %c\n", *((char*)ptr));

    double z = 3.14;
    double* zPtr = &z;
    ptr = zPtr;
    printf("double data: %lf\n", *((double*)ptr));

    return 0;
}