#include<stdio.h>

int main() {

    int array[2][3] = {1,2,3,4};

    for(int row=0; row<2; row++){
        for(int col=0; col<3; col++){
            printf("Address of array[%d][%d] = %p\n", row, col, &array[row][col]);
        }
    }

    printf(array[3]);

    puts("===== Elements of int array[2][3] =====");
    for(int row=0; row<2; row++){
        for(int col=0; col<3; col++){
            printf("Address of array[%d][%d] = %d\n", row, col, array[row][col]);
        }
    }

    return 0;
}