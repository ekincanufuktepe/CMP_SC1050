#include<stdio.h>

#define FEATURE

int main() {

    #ifdef FEATURE
        printf("Feature available\n");
    #else
        printf("Feature NOT available\n");
    #endif

    return 0;
}