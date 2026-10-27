#include "array_operations.h"

#define SIZE 10

int main() {

    int x[SIZE] = {5,8,0,2,4,7,2,5,1,6};
    puts("===== BEFORE SORTING =====");
    printArray(x, SIZE);
    // search for 7
    // printf("7 is located at: %d\n", linearSearch(7, x, SIZE));
    printf("%s", linearSearch(-1, x, SIZE) == -1 ? "Not found\n" : "7 is in the array\n");
    
    bubblesort(x, SIZE);
    puts("===== AFTER SORTING =====");
    printArray(x, SIZE);

    // search for 7
    printf("(linear)7 is located at: %d\n", linearSearch(7, x, SIZE));
    printf("(binary)12 is located at: %d\n", binarySearch(0, x, SIZE));

    return 0;
}