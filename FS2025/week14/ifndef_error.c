#include<stdio.h>

// #define FEATURE 10

int main() {

    #ifndef FEATURE    
        #error Feature not enabled
        // #line __LINE__ "testing"
    #else
        printf("Feature value: %d\n", FEATURE);
    #endif
    
    return 0;
}