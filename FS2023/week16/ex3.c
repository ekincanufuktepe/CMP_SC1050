#include<stdio.h>
#include<stdlib.h>

int main() {

    void* ptr;
    ptr = NULL;

    ptr = malloc(4);

    *((int *)ptr) = 10;
    
    //int x = 10;

    //ptr = &x;

    printf("Data: %d\n", *((int*)ptr));

    // prevent memory leaks
    free(ptr);
    // preventing dangling pointers
    ptr = NULL;

    return 0;
}