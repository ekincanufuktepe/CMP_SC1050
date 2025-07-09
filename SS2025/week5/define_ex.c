#include<stdio.h>

#define SIZE 10

void print_array(int x[SIZE]);

int main() {

    int x[SIZE] = {1,2,3,4,5};
    print_array(x);
    return 0;
}

void print_array(int x[]) {
    for(int i=0; i<SIZE; ++i) {
        printf("%d ", x[i]);
    }
    printf("\n");
}