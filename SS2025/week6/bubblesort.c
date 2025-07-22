#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void bubblesort(int x[], int len);
void print_array(int x[], int len);
int linear_search(int item, int x[], int len);
int binary_search(int item, int x[], int len);

int main() {
    int x[10] = {0};
    srand(time(NULL));
    for(int i=0; i<10; i++) {
        x[i] = rand()%10;
    }

    print_array(x, 10);
    // printf("item 5 found at: %d\n", linear_search(5, x, 10));
    bubblesort(x, 10);
    print_array(x, 10);
    // printf("item 5 found at: %d\n", linear_search(5, x, 10));
    printf("item 5 found at: %d\n", binary_search(5, x, 10));

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
//[1 1 2 4 (4) 5 7 8 9]  // 9 elements, mid => 4, searched item 1
int binary_search(int item, int x[], int len) {
    int start = 0;
    int end = len - 1;

    while(start <= end ) {
        int mid = start + (end - start)/2;
        if(x[mid] == item) {
            return mid;
        }
        else if(x[mid] < item) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return -1;
}