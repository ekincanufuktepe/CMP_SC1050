#include<stdio.h>

int main() {

    int array[5] = {1,2,3,4,5};
    int* ptr = NULL;

    ptr = array;

    printf("Address of array: %p\n", array);
    printf("Address of array (pointer): %p\n", ptr);

    printf("2nd element in array: %d\n", array[1]);
    printf("2nd element in array (pointer): %d\n", ptr[1]);

    printf("2nd element in array: %d\n", *(array+1));
    printf("2nd element in array (pointer): %d\n", *(ptr+1));

    return 0;
}