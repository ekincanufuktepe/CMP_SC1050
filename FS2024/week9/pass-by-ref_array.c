#include<stdio.h>

void doubleEachElementArrayVersion(int a[], int arraySize);
void doubleEachElementPointerVersion(int* a, int arraySize);
void printArray(int a[], int arraySize);

int main() {

    int array[5] = {1,2,3,4,5};
    printArray(array, 5);
    // doubleEachElementArrayVersion(array, 5);
    doubleEachElementPointerVersion(array, 5);
    printArray(array, 5);

}

void doubleEachElementArrayVersion(int a[], int arraySize) {
    for(int i=0; i<arraySize; i++) {
        a[i] *= 2;
    }
}

void printArray(int a[], int arraySize) {
    for(int i=0; i<arraySize; i++) {
        // printf("%d ", a[i]);
        printf("%d ", *(a+i));
    }
    printf("\n");
}


void doubleEachElementPointerVersion(int* a, int arraySize) {
    for(int i=0; i<arraySize; i++) {
        *(a+i) *= 2;
        // *(a) *= 2;
        // a = a + 1;
    }
}