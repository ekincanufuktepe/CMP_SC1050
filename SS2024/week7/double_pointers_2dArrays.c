#include<stdio.h>
#define ROWS 3
#define COLS 3

int main() {

    int array[ROWS][COLS] = {{1,2,3}, 
                       {4,5,6}, 
                       {7,8,9}};

    int* ptr[ROWS];
    for(int i=0; i<ROWS; i++) {
        ptr[i] = array[i];
        printf("Data: %d, Addr: %p\n", *(ptr[i]), ptr[i]);
    }

    int** dPtr = NULL;
    dPtr = ptr;

    printf("P-Data: %d, Addr: %p\n", *(*(dPtr+1)+2), (*(dPtr+1)+2));
    printf("A-Data: %d, Addr: %p\n", dPtr[1][2], &dPtr[1][2]);

    return 0;
}