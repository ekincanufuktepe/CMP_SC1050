#include<stdio.h>

int main() {

    int array[5][2] = {1,2,3,4,5};

    printf("Size of array (in bytes): %d\n", ((int)sizeof(array[0])));
    printf("Size of int: %d\n", ((int)sizeof(int)));

    int array_size_bytes = ((int)sizeof(array));
    int type_size_of_array = ((int)sizeof(int));
    int size_of_array = array_size_bytes/type_size_of_array;

    printf("Size of array: %d\n", size_of_array);
    return 0;
}