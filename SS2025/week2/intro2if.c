#include<stdio.h>

int main() {
    int x = 0;
    int y = 0;

    scanf("%d", &x);
    scanf("%d", &y);
    //printf("Evaluation Result: %d\n", x = y);

    if(x == y) {
        printf("Inside if-statement\n");
    }

    return 0;
}