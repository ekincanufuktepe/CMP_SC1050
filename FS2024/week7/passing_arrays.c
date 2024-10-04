#include<stdio.h>
#define ROWS 2
#define COLS 2


void multiplyTwoWithEachElement(int array[][COLS]) {
    for(int i=0; i<ROWS; i++) {
        for(int j=0; j<COLS; j++) {
            array[i][j] *= 2;
        }
    }
}

void print2DArray(int array[][COLS]) {
    for(int i=0; i<ROWS; i++) {
        for(int j=0; j<COLS; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int a[2][2] = {1, 2, 3, 4};
    
    print2DArray(a);
    multiplyTwoWithEachElement(a);
    print2DArray(a);

    return 0;
}