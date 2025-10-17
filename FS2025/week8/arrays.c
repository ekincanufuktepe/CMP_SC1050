#include<stdio.h>

#define SIZE 5

int main() {
    int array[SIZE];
    // int array[5] = {5,6,7,8,9};
    // int array[5] = {5,6,7};
    // int array[5] = {0};

    printf("Address of array: %p\n", array);

    printf("size of array: %lu\n", sizeof(array));
    for(int i=0; i<5; i++) {
        array[i] = i + 1;
        printf("array[%d] = %d, Address: %p\n", i, array[i], &array[i]);
    }

    scanf("%d", array);
    printf("array[%d] = %d, Address: %p\n", 0, array[0], &array[0]);

    int array_with_no_size[] = {1,2,3,5,7,8,9};

    printf("size of array_with_no_size: %lu\n", sizeof(array_with_no_size));

    // int array_with_no_size[2] = {4,4};

    return 0;
}