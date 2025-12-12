#include<stdio.h>

#define FEATURE

int main() {

    #ifdef FEATURE
        printf("Feature available at line: %d\n", __LINE__);
    #else
        printf("Feature NOT available\n");
    #endif

    return 0;
}