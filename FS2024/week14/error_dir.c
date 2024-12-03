#include<stdio.h>

#define FEATURE 10

int main() {

    #ifndef FEATURE
        #error "Feature is not enable. Please check your configuration\n"
    #else
        printf("Feature: %d\n", FEATURE);
    #endif
   
    printf("End of program!\n");
    return 0;
}