#include<stdio.h>
#include<stdlib.h>

int main() {

    int* p = NULL;

    p = malloc(5*sizeof(int)); // dynamically allocates 5 integer space 

    // initialize the values on the heap memory
    for(int i=0; i<5; i++) {
        // p[i] = i;
        *(p+i) = i;
    }

    // read values from pointer
    for(int i=0; i<5; i++) {
        // printf("value: %d\n", p[i]);
        printf("value: %d\n", *(p+i));
    }
 
    free(p);  // without free you will have memory leaks
    return 0;
}