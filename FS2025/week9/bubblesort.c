#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubblesort(int array[], int size);
void initializeArray(int array[], int size);
void printArray(int array[], int size);
int dummy();

int main() {
    int a[10] = {0};
    printArray(a, 10);
    initializeArray(a, 10);
    printArray(a, 10);
    bubblesort(a, 10);
    printArray(a, 10);

    return 0;
}

void bubblesort(int array[], int size) {
    int tmp = 0;
    for(int i=1; i<size; i++) {
        for(int k=0; k<size - 1; k++) {
            if(array[k] < array[k+1]) {
                tmp = array[k];
                array[k] = array[k+1];
                array[k+1] = tmp;
            }
        }
    }
}

void initializeArray(int array[], int size) {
    srand(time(NULL));
    for(int i=0; i<size; i++) {
        array[i] = rand() % 10 + 1;
    }
}

void printArray(int array[], int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int dummy() {
    return 1;
}