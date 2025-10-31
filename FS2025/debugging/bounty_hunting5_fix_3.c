#include <stdio.h>

// change the function signature, swap cols and rows arguments, and swap the rows and cols for the array
void print_matrix(int cols, int rows, int a[cols][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main(void) {
    int m[2][3] = {{1,2,3}, {4,5,6}};
    
    print_matrix(3, 2, m);

    return 0;
}
