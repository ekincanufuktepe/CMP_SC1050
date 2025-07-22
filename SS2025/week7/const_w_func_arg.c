#include<stdio.h>

void print_array(const int* const p, int len);

int main() {
    int a[5] = {1,2,3,4,5};

    print_array(a, 5);

    return 0;
}

void print_array(const int* const p, int len) {
    for(int i=0; i<len; i++) {
        // printf("%d ", *p);
        // p++;
        printf("%d ", *(p + i));
    }
}