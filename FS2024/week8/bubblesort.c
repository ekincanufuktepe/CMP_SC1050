#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 20

void initializeArray(int array[], int arraySize);
void printArray(int array[], int arraySize);
int maximum(int array[], int arraySize);
void bubbleSort(int array[], int arraySize);
float median(int array[], int arraySize);
int linearSearch(int elem, int array[], int arraySize);
void linearSearchMultipleIndex(int elem, int array[], int indexArray[], int arraySize);


int main() {
    srand(time(NULL));
    int array[SIZE] = {0};
    int indexArray[SIZE] = {0};

    for(int i=0; i<SIZE; i++) { indexArray[i] = -1;}

    printArray(array, SIZE);
    initializeArray(array, SIZE);
    printArray(array, SIZE);
    printf("Max: %d\n", maximum(array, SIZE));
    bubbleSort(array, SIZE);
    printArray(array, SIZE);
    printf("(FAST) Max: %d\n", array[SIZE-1]);
    printf("Median: %f\n", median(array, SIZE));
    int element = 1;
    printf("Element %d is at index %d\n", element, linearSearch(element, array, SIZE));
    printf("Finding the indicies of element %d\n", element);
    linearSearchMultipleIndex(element, array, indexArray, SIZE);
    printArray(indexArray, SIZE);

    int x[10] = {0};
    printf("size of array x: %d\n", (int)sizeof(x)/(int)sizeof(int));

    return 0;
}

void initializeArray(int array[], int arraySize) {
    printf("size of array array: %d\n", (int)sizeof(array)/(int)sizeof(int));
    for(int i=0; i<arraySize; i++) {
        array[i] = rand() % 10;
    }
}

void printArray(int array[], int arraySize) {

    for(int i=0; i<arraySize; i++) {
        printf("%3d", array[i]);
    }
    printf("\n");
}

int maximum(int array[], int arraySize) {
    int max = array[0];

    for(int i=1; i<arraySize; i++) {
        if(max < array[i]) {
            max = array[i];
        }
    }

    return max;
}

void bubbleSort(int array[], int arraySize) {
    int tmp = 0;
    for(int i=0; i<arraySize; i++) {
        for(int j=i+1; j<arraySize; j++) {
            if(array[i] > array[j]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

float median(int array[], int arraySize) {

    float med = 0;

    // if(arraySize % 2 == 0) {
    //     med = (float)(array[(arraySize/2) - 1] + array[arraySize/2])/2;
    // }
    // else {
    //     med = (float)array[arraySize/2];
    // }
    return arraySize % 2 == 0 ? (float)(array[(arraySize/2) - 1] + array[arraySize/2])/2 : (float)array[arraySize/2]; 
    // return ((float)(array[(arraySize-1)/2] + array[(arraySize)/2])/2);
}

int linearSearch(int elem, int array[], int arraySize) {
    //int index = -1;

    for(int i=0; i<arraySize; i++) {
        if(elem == array[i]) {
            return i;
        }
    }
    return -1;
}

void linearSearchMultipleIndex(int elem, int array[], int indexArray[], int arraySize) {
    int index = 0;
    for(int i=0; i<arraySize; i++) {
        if(elem == array[i]) {
            indexArray[index++] = i;
        }
    }
}