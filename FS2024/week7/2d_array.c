#include<stdio.h>

int main() {

    char array[2][3] = {0};

    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            printf("Address of array[%d][%d] = %p\n", i, j, &array[i][j]);
        }
    }
    

}