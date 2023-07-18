#include<stdio.h>

#define ROWS 3
#define COLUMNS 3

int main() {

    int a[ROWS][COLUMNS] = {{5,6,7},{3,0,9},{}};

    // printf("%p\n", &a[0][0]);
    // printf("%p\n", &a[0][1]);
    // printf("%p\n", &a[1][0]);

    for(int i=0; i<ROWS; i++ ) {
        for(int j=0; j<COLUMNS; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}