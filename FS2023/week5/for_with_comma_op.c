#include<stdio.h>

int main() {


    for(int i=0, j=5; i != j; i=i+2, ++j) {
        printf("i=%d, j=%d\n", i, j);
    }

    return 0;
}