#include<stdio.h>

#define SIZE 5

void incrementor(char a[]);
void printArray(char a[]);

int main() {
    // char array[SIZE] = {60,61,62,63,64};
    char charArray[SIZE] = {'e', 'k', 'i', 'n', '\0'};
    printf("%s\n", charArray);

    char intArray[SIZE] = {60,61,62,63,64};

    printf("Before\n");
    printArray(intArray);
    printf("After\n");
    incrementor(intArray);
    printArray(intArray);
    return 0;
}

void incrementor(char x[]) {
    for(int i=0; i<SIZE; i++) {
        x[i] = x[i] + 1;
    }
}

void printArray(char x[]) {
    for(int i=0; i<SIZE; i++) {
        printf("x[%d]: %d\n", i, x[i]);
    }
}