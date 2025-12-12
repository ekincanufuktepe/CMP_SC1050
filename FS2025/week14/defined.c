#include<stdio.h>

// #define MY_CONSTANT 5
int main() {

    // #if !defined(MY_CONSTANT)
    #ifndef MY_CONSTANT
        printf("inside\n");
        #define MY_CONSTANT 0
    #endif

    printf("%d\n", MY_CONSTANT);

    return 0;
}