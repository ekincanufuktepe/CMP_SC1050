#include<stdio.h>

int main() {

    int array[5];
    int x;

    printf("Size of variable x: %zu\n", sizeof(x));

    printf("Size of Array: %zu\n", sizeof(array));

    printf("Address of array: %p\n", array); // base address (BA)
    
    // BA + (index_value * type_size)
    printf("Address of array[0]: %p\n", &array[0]); // BA + (0 * 4) == BA
    printf("Address of array[1]: %p\n", &array[1]); // BA + (1 * 4) == BA + 4
    printf("Address of array[2]: %p\n", &array[2]); // BA + (2 * 4) == BA + 8
    printf("Address of array[3]: %p\n", &array[3]);
    printf("Address of array[4]: %p\n", &array[4]);

    return 0;
}