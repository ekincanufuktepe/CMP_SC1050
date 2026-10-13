#include<stdio.h>

#define SIZE 10

int main() {

    int array[SIZE] = {1,2,4};

    printf("size of array: %zu\n", sizeof(array));

    for(size_t i = 0; i<SIZE; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}