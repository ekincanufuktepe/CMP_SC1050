#include<stdio.h>
#include<stdlib.h>

int main() {
    // allocated on the stack
    int x;
    char name[50];

    // dynamic allocation will appear on the heap
    int* ptr = NULL;
    // use malloc, calloc
    ptr = malloc(sizeof(int)); // allocate a size of int
    // ptr = malloc(4); // allocate 4 bytes
    *ptr = 6;
    printf("pointer address: %p\n", ptr);
    printf("pointer value: %d\n", *ptr);    

    free(ptr); // reclaim the allocated space (deallocation)

    return 0;

}