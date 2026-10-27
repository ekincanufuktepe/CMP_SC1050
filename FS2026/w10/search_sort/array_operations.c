#include "array_operations.h"

void printArray(int array[], int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", array[i]);
    }
    puts("");
}

void bubblesort(int array[], int size) {
    for(int i=0; i<size-1; i++) {
        for(int k=0; k<size-1-i; k++) {
            if(array[k] > array[k+1]) {
                int tmp = array[k];
                array[k] = array[k+1];
                array[k+1] = tmp;
            }
        }
    }
}

int linearSearch(int element, int array[], int size) {
    for(int i=0; i<size; i++) {
        if(element == array[i]) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int element, int array[], int size) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/2;

    // while(start <= end) {
    //     if(array[mid] == element) {
    //         return mid;
    //     }
    //     else if(array[mid] < element) {
    //         start = mid + 1;
    //     }
    //     else {
    //         end = mid - 1;
    //     }
    //     mid = (start + end)/2;
    // }
    do {
        if(array[mid] == element) {
            return mid;
        }
        else if(array[mid] < element) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end)/2;
    } while(start <= end);

    return -1;
}