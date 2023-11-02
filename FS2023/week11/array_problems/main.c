//#include<stdio.h>
#include "array_functions.h"

int main() {
    int data[] = {1,6,9,2,6,2,4,8,0,11,2,34,100,-2};
    int array_size = 0;
    array_size = (int)sizeof(data)/sizeof(int);
    //printf("Size: %d\n", array_size);

    printf("Found at index: %d\n", linearSearch(data, array_size, 3));

    printf("Before sort:\n");
    printArray(data, array_size);
    printf("After sort:\n");
    bubbleSort(data, array_size);
    printArray(data, array_size);

    return 0;
}