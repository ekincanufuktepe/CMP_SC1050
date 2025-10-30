#include<stdio.h>

void printArray(int *p, int size);

int main() {

    int array[5] = {1,2,3,4,5};

    printArray(array, 5);

    return 0;

}

void printArray(int *p, int size) {
    for(int i=0; i<size; i++) {
        printf("[%d] ", *(p + i));
    }
    printf("\n");
}