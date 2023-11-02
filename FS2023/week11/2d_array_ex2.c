#include<stdio.h>

int main() {
    // char array[3][3] = {'e', 'k', 'i', 'n'};
    int array[3][3] = {0};
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            printf("%p\n", &array[i][j]); // prints addresses of each element
        }
    }
    return 0;
}