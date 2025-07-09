#include<stdio.h>
void double_values(int arr[], int len);

int main() {
    int x[5] = {1, 2, 3, 4, 5};

    printf("(from main) address of array x: %p\n", x);
    printf("before calling double_values() function\n");
    for(int i=0; i<5; i++) {
        printf("%d ", x[i]);
    }
    double_values(x, 5);

     printf("after calling double_values() function\n");
    for(int i=0; i<5; i++) {
        printf("%d ", x[i]);
    }

    return 0;
}

void double_values(int arr[], int len) {
    printf("(from double_value) address of passed array: %p\n", arr);
    for(int i=0; i<len; i++) {
        arr[i] = arr[i] * 2;
    }
}

