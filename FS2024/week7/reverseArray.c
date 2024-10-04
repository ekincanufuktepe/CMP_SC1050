#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printArray(int array[], int size);
void reverseArray(int array[], int size);


int main() {
    srand(time(NULL));

    int a[5];

    for(int i=0; i<5; i++) {
        a[i] = rand() % 10 + 1;
    }

    printArray(a, 5);
    reverseArray(a, 5);
    printf("\n\n");
    printArray(a, 5);

    return 0;
}


void printArray(int array[], int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", array[i]);   
    }
    printf("\n");
}

void reverseArray(int array[], int size) {
    for(int i=0; i<size/2; i++) {
        int tmp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = tmp;
    }
}