#include<stdio.h>

void printArray(const int* const arrayPtr, int size);
void printArray2(int array[], int size);

int main() {
    int array[5] = {1,2,3,4,5};
    printArray(array, 5);
    // printArray2(array, 5);
    return 0;
}

/*
    First const (leftmost) prevents from values being changed
    Second const prevents the address being modified
*/
void printArray(const int* const arrayPtr, int size) { 

    /*
    for(int i=0; i<size; i++) {
        printf("%d ", arrayPtr[i]);
    }
    */
    // for(int i=0; i<size; i++) {
    //     printf("%d ", *(arrayPtr++));
    // }
    for(int i=0; i<size; i++) {
        // printf("%d ", *(arrayPtr++)); // the second will prevent this from happening and will give a compile error 
        printf("%d ", *(arrayPtr + i));
        // arrayPtr[i] += 1; // the first const will prevent this from happening and will give a compile error
    }
    printf("\n");

}

void printArray2(int array[], int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", *(array + i));
    }
     printf("\n");
}
