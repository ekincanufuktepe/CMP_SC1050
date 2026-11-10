#include<stdio.h>

int main() {
    
    void* vPtr = NULL;
    
    int x = 5;
    int* xPtr = &x;

    char a = 'a';
    char* aPtr = &a;

    vPtr = xPtr;
    printf("*vPtr: %d\n", *((int*)vPtr));
    vPtr = aPtr;
    printf("*vPtr: %c\n", *((char*)vPtr));

    int z = 3;
    int* p = &z;

    return 0;
}