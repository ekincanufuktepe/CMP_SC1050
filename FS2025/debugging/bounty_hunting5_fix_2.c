#include <stdio.h>

void print_matrix(int rows, int cols, int a[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main(void) {
    // swap the rows and column and remove the inner braces
    int m[3][2] = {1,2,3,4,5,6};
    
    print_matrix(3, 2, m);

    return 0;
}
