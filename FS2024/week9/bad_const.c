#include<stdio.h>

int main() {

    const int x = 5;
    // int* xPtr;    // non-constant pointer to non-constant data
    const int* xPtr;    // non-constant pointer to constant data
    // int* const xPtr;    // constant pointer to non-constant data
    // const int* const xPtr;    // constant pointer to constant data
    
    // you can modify a constant variable through a non-constant pointer to non-constant data pointer, 
    // which is bad practice. Therefore, you want to keep things consistent and use a pointer with the
    // correct usage of const qualifier usage to protect the variable from modifications.
    // int* xPtr;   
    xPtr = &x;
    (*xPtr)++;
    printf("x: %d\n", x);

    return 0;
}