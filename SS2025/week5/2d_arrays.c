#include<stdio.h>

#define ROWS 2
#define COLS 4

int main() {

    // int x[ROWS][COLS] = {{0}};
    // int x[ROWS][COLS] = {{0}, {1,2}};
    int x[ROWS][COLS] = {1, 1, 3};
    int count = 1;
    
    // for(int i=0; i<ROWS; i++) {
    //     for(int k=0; k<COLS; k++) {
    //         x[i][k] = count;
    //         ++count;
    //     }
    // }

    for(int i=0; i<ROWS; i++) {
        for(int k=0; k<COLS; k++) {
            //printf("%d ", x[i][k]);
            printf("x[%d][%d]= %d, Address= %p\n", i, k, x[i][k], &x[i][k]);
        }
        //printf("\n");
    }

    return 0;
}