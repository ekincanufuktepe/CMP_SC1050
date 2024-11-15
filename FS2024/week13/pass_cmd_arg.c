#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]) {

    int* pArray = NULL;
    if(argc != 2) {
        fprintf(stderr, "I asked you to enter 2 arguments you dummy!\n");
        return -2;
    }
    int size = atoi(argv[1]);
    if(size <= 0) {
        fprintf(stderr, "Size is 0 or less. You passed: %d\n", size);
        return -1;
    }
    pArray = calloc(size, sizeof(int));

    for(int i=0; i<size; i++){
        *(pArray + i) = i;
    }

    for(int i=0; i<size; i++){
        printf("%d ", *(pArray + i));
    }
    printf("\n");

    free(pArray);

    return 0;
}