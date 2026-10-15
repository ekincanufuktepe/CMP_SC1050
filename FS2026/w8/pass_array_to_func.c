#include<stdio.h>

void doubleIt(int array[], int size);
void printArray(int array[], int size);

int main() {
    int size = 5;
    int x[5] = {1,2,3,4,5};

    printf("%d", size+1);

    printf("(main)address of x: %p\n", x);
    printf("(main)address of size: %p\n", &size);
    printArray(x, size);
    
    doubleIt(x, size);

    printArray(x, size);

    return 0;
}


void doubleIt(int array[], int size) {
    printf("(doubleit)address of array: %p\n", array);
    printf("(doubleit)address of size: %p\n", &size);
    for(int i=0; i<size; i++) {
        array[i] *= 2;
    }
}
void printArray(int array[], int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
