#include<stdio.h>

int main() {

    // int array[5] = {1,2,3,4,5,6,7}; // initialization over array size
    // int array[5] = {1,2,3,4,5}; // initialization exact same size of array
    int array[5] = {1}; // initialization under array size, the rest of the array elements will be initialized to 0.

    int n[] = {1,2,3}; // the array size will be determined based on the number of elements initialized with

    printf("size of an double: %d\n", (int)sizeof(double));
    printf("size of int array[5]: %d\n", (int)sizeof(array));
    printf("The number of elements in array 'array': %d\n", (int)sizeof(array)/(int)sizeof(int));
    printf("size of int n[]: %d\n", (int)sizeof(n));
    printf("The number of elements in array 'n': %d\n", (int)sizeof(n)/(int)sizeof(int));

    for(int i=0; i<5; i++) {
        printf("array[%d] = %d\n", i, array[i]);
    }

    // printf("(1) Address of array[0]: %p\n", array);
    // printf("(2) Address of array[0]: %p\n", &array[0]);
    // printf("(3) Address of array[1]: %p\n", &array[1]);
    // printf("(4) Address of array[2]: %p\n", &array[2]);

    return 0;
}