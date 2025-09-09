#include<stdio.h>

int main() {

    int x = 3;

    // printf("The number %d is %s, 2*x:%d\n", x, (x % 2) == 0 ? "EVEN" : "ODD", x*2);
    printf("The number %d, even status: %d, 2*x:%d\n", x, (x % 2) ? 0 : 1, x*2);

    int even_status = (x % 2) ? 0 : 1;
    printf("Even status: %d\n", even_status);

    return 0;
}