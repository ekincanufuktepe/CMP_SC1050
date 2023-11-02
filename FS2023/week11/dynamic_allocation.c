#include<stdio.h>
#include<stdlib.h>
// #include<malloc.h>

int main() {

    int* ptr = NULL;
    printf("%p\n", ptr);
    //printf("%d\n", *ptr);

    // Dynamic allocation

    // allocate 1 integer space, equivalent to declaring an integer variable.
    //ptr = malloc(sizeof(int)); 
    
    // allocate 5 integer space, equivalent to declaring an integer array of 5.
    ptr = malloc(sizeof(int)*5); 
    *ptr = 5;
    *(ptr+1) = 6;
    printf("%p\n", ptr);
    printf("%d\n", *(ptr+1));
    printf("%d\n", *ptr);

    // you can use pointers like arrays as well.
    printf("%d\n", ptr[0]);
    printf("%d\n", ptr[1]);

    return 0;
}