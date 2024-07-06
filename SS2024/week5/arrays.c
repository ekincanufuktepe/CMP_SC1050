#include<stdio.h>

int main() {
    // define an integer array with the size of 5 (five integers)
    int array[5];
    printf("Address of array: %p\n", array);

    // initialize the array
    for(int i=0; i<5; i++) {
        printf("Storing at array[%d]: %p\n", i, &array[i]);
        array[i] = i;
    }

    printf("Array Values: ");
    // printing the array content
    for(int i=0; i<5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}