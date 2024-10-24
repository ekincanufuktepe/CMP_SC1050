#include<stdio.h>

int main() {

    int x[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int* xPtr[3];

    for(int i=0; i<3; i++) {
        xPtr[i] = &x[i][0];
    }

    int** xDPtr = NULL;
    xDPtr = xPtr;

    printf("x[1][1]: %d\n", x[2][0]);
    printf("xPtr: %d\n", (*(xPtr[2])+0));
    printf("xDPtr: %d\n", *(*(xDPtr+2)+0));


    return 0;

}