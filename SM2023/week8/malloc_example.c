#include<stdio.h>
//#include<malloc.h>
#include<stdlib.h>

int main() {

    /*
        Pointers do not allocate space for your, if you try to
        use them without dynamic allocation, you are likely to 
        get a Segmentaion fault. But you can dynamically allocate space
        on the heap using malloc/calloc functions, and provide the allocated
        space to the pointer.
    */

    int* p;
    p = NULL;
    printf("address of p: %p\n", p);
    p = malloc(sizeof(int)); // dynamically allocate a space on the heap memory, and set address
    printf("address of p: %p\n", p);
    *p = 5;
    printf("value: %d\n", *p);
    
    /* 
        - Reclaim/deallocate the dynamically allocated space with malloc
        - If you forget to free the dynamically allocated spaces, you will
            get memory leaks, which could affect your computer's performance
            in time.
    */
    free(p);    

    // free(p); // bad (runtime issue): this will cause a double free error, free only once
    p = NULL;
    if(p != NULL) {
        printf("address of p: %p\n", p);
        printf("value: %d\n", *p);
    }
    
    free(NULL); // this will not affect your program

    return 0;
}