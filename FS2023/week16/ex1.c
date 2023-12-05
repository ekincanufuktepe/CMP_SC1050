#include<stdio.h>

int main() {

    int a[3][3];
    // {1  2  3} , {5  6  7}

    // with multi-dimensional arrays, the data will still be contiguous, and aligned
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("Address for a[%d][%d] = %d\n", i, j, &a[i][j]);
        }
    }

    return 0;
}