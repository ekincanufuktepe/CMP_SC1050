#include<stdio.h>
#include<stdlib.h>

int main() {

    // this will compile with no issues
    free(NULL);

    void* ptr;
    ptr = NULL;

    ptr = malloc(4);
    // double free issue
    free(ptr);
    // free(ptr);
    ptr = NULL;
    return 0;
}