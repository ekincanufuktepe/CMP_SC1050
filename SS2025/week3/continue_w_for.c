#include<stdio.h>

int main() {

    int x;
    for(x = 1; x <= 10; x++) {
        if(x == 5){
            continue;
        }
        printf("%d ", x);
    }
    printf("\n");
    printf("Final value of x: %d\n", x);
    return 0;
}