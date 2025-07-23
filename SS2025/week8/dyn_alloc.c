#include<stdio.h>
// #include<malloc.h>
#include<stdlib.h>

int main() {

    int array[10];
    int* pArray = NULL;
    
    pArray = (int*)malloc(10*sizeof(int));

    for(int i=0; i<10; i++) {
        *(pArray + i) = i;
    }

    for(int i=0; i<10; i++) {
        printf("Data: %d\n", *(pArray + i));
    }
    pArray++;

    free(pArray);

    return 0;
}