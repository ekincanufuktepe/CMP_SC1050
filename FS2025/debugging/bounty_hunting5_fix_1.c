#include <stdio.h>

void print_matrix(int rows, int cols, int a[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main(void) {
    int m[2][3] = {{1,2,3}, {4,5,6}};
    
    // ❌ Bug: swapped rows and cols
    print_matrix(2, 3, m);

    return 0;
}
