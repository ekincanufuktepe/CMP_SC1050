#include<stdio.h>

void bubblesort(int array[], int size);
void printArray(int array[], int size);
#define SIZE 10

int main() {
    int array[SIZE] = {6, 8, 1, 2, 3, 4, 0, 5, 9, -2};
    printf("Array before sort:");
    printArray(array, SIZE);
    bubblesort(array, SIZE);
    printf("Array after sort:");
    printArray(array, SIZE);
    return 0;
}

void printArray(int array[], int size) {
    for(int i=0; i<size; i++) {
        printf("%3d", array[i]);
    }
    printf("\n");
}

void bubblesort(int array[], int size) {
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(array[i] > array[j]) {
                // swapping elements
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}