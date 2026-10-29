#include<stdio.h>

int main() {

    const int array_size = 5;
    //int x[array_size] = {1,2,3,4};
    int x[array_size];
    for(int i=0; i<array_size; i++) 
        printf("%d ", x[i]);    
    //x[i] = 0;
    printf("size: %zu\n", sizeof(x));
    return 0;
}