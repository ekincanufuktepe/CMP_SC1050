#include<stdio.h>

int main() {

    int array[5];
    int x;

    printf("Size of variable x: %zu\n", sizeof(x));

    printf("Size of Array: %zu\n", sizeof(array));

    printf("Address of array: %p\n", array);
    
    printf("Address of array[0]: %p\n", &array[0]);
    printf("Address of array[1]: %p\n", &array[1]);
    printf("Address of array[2]: %p\n", &array[2]);
    printf("Address of array[3]: %p\n", &array[3]);
    printf("Address of array[4]: %p\n", &array[4]);

    return 0;
}