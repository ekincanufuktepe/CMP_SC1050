#include<stdio.h>
#include<stdlib.h>

int main() {

    int** array_2d = NULL;
    array_2d = calloc(3, sizeof(int*)); // allocate 3 int* pointer spaces to keep the addresses for each row
    for(int i=0; i<3; i++) {
        *(array_2d+i) = calloc(3, sizeof(int)); // create 1x3 array space and assign it to one of the double pointer's address
    }

    int x = 0;
    // assign values to the dynamically allocated 2D space
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            *(*(array_2d+i)+j) = x;
            ++x;
        }
    }

    // print the 2D dynamically allocated space
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%d ", *(*(array_2d+i)+j));
        }
        printf("\n");
    }

    // free each row that were dynamically allocated
    for(int i=0; i<3; i++) {
        free(*(array_2d+i));
    }

    // free the space that held the addresses to the rows.
    free(array_2d);

    return 0;
}