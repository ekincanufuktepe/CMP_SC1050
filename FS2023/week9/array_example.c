#include<stdio.h>

#define SIZE 5

int main() {

    // array size can be determined based on the initialization
    int x[] = {3, 2, 0, -1};    // size is determined based on the number of initialized elements
    // some array definition and initialization examples
    // int x[5]; // definition
    // int x[5] = {1,2,3,4,5,6}; // compile error size and number of initialized elements do not match
    // int x[5] = {1,2};    // fill the rest with zeros
    // int x[5] = {0};      // fill all the indicies with zeros
    // int size = 5;
    // this will cause compile errors, because size is a variable and prone to change
    // int x[size]; 
    // this code example is fine beceuse SIZE is not a variable
    // int x[SIZE];
    for(int i=0; i<10; i++) {
        printf("%d ", x[i]);
        x[i] = i;
    }
    printf("\n");
    return 0;
}