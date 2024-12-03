#include<stdio.h>

// #define FEATURE

int main() {

    #ifdef FEATURE
        printf("Feature is available\n");
    #else
        printf("Feature not available\n");
    #endif

    printf("End of program!\n");
    return 0;
}