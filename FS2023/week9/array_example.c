#include<stdio.h>

int main() {

    // array size can be determined based on the initialization
    int x[] = {3, 2, 0, -1};

    for(int i=0; i<4; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
    return 0;
}