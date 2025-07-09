#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubblesort(int x[], int len);
void print_array(int x[], int len);
int linear_search(int item, int x[], int len);

int main() {
    int x[10] = {0};
    srand(time(NULL));
    for(int i=0; i<10; i++) {
        x[i] = rand()%10;
    }

    print_array(x, 10);
    printf("item 5 found at: %d\n", linear_search(5, x, 10));
    bubblesort(x, 10);
    printf("item 5 found at: %d\n", linear_search(5, x, 10));
    print_array(x, 10);

    return 0;
}

void bubblesort(int x[], int len) {
    for(int k=0; k<len; k++) {
        for(int i=0; i<len-1; i++) {
            if(x[i] > x[i+1]) {
                int tmp = x[i];
                x[i] = x[i+1];
                x[i+1] = tmp;
            }
        }
    }
}

void print_array(int x[], int len) {
    printf("Array: ");
    for(int i=0; i<len; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
}

int linear_search(int item, int x[], int len) {
    for(int i=0; i<len; i++) {
        if(x[i] == item) {
            return i;
        }
    }
    return -1;
}