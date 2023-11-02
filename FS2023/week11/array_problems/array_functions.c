#include "array_functions.h"

// this will find the index of a data
int linearSearch(const int array[], int size, int search_data) {
    for(int i=0; i<size; i++) {
        if(array[i] == search_data) {
            return i;
        }
    }
    return -1;
}

// this will sort my array
void bubbleSort(int array[], int size) {
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(array[i] > array[j]) {
                int tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    return;
}

void printArray(int array[], int size) {
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}