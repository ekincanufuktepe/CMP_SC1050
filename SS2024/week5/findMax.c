#include<stdio.h>
#define SIZE 5  // a directive

int findMaxValue(int arr[]);
void update(int arr[]); 

int main() {
    int size = 5;
    int array[SIZE] = {5, 4}; // fills the rest of the array with zeros. The array will be {5,4,0,0,0}

    printf("Max is: %d", findMaxValue(array));
    printf("SIZE: %d\n", SIZE);

     for(int i=0; i<SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    update(array);
    
    for(int i=0; i<SIZE; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
/*
    Arrays are passed as addresses (address to the first 
    element of the array). They work as pass-by-reference.
    Therefore, if you make any changes on the passed array
    it will modify the original array.
*/
int findMaxValue(int arr[]) { // find the max value in the array and return the max value (not position/index).
    int max = arr[0];
    for(int i=1; i<SIZE; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

/*
    Multiplies every element of the passed array by 2 (x2).
    You do not have to return the array back, because the
    arrays are passed-by-reference so the changes will be 
    applied on the original array.
*/
void update(int arr[]) {
    for(int i=0; i<SIZE; i++) {
        arr[i] = arr[i] * 2;
    }
}
