#include<stdio.h>

#define ROW 3
#define COL 4

int main() {

    // int matrix[ROW][COL];
    int matrix[ROW][COL];

    int count = 1;
    for(int i=0; i<ROW; i++) {
        for(int k=0; k<COL; k++) {
            matrix[i][k] = count;
            count++;
        }
    }

    for(int i=0; i<ROW; i++) {
        for(int k=0; k<COL; k++) {
            printf("%d ", matrix[i][k]);
        }
        printf("\n");
    }

    for(int i=0; i<ROW; i++) {
        for(int k=0; k<COL; k++) {
            printf("Address of matrix[%d][%d] %p\n", i, k, &matrix[i][k]);
        }
    }

    return 0;
}