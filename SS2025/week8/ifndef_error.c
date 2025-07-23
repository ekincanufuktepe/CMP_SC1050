#include<stdio.h>

// #define FEATURE 10

int main() {

    #ifndef FEATURE
        #warning "Feature not enabled"
    #else
        printf("Feature value: %d\n", FEATURE);
    #endif

    return 0;
}