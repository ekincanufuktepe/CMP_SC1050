#include<stdio.h>

int main() {
    
    // It is always good practice to initialize your variables after they are defined.
    /* Not initializing your variable can result in assigning with some random value
        which may cause difficulties predicting what initial value is assigned.
        If variable is assigned, you can easily write error checks and controls.
    */
    int x = 0;
    int y = 0;
    int r = 0; // remainder

    // printf("x:%d, y:%d, r:%d\n", x, y, r);
    printf("Enter x, y: ");
    scanf("%d%d", &x, &y);  // get two integer values from user
    // printf("\nx:%d, y:%d, r:%d\n", x, y, r);

    r = x%y;

    printf("%d mod %d: %d\n", x, y, r);

    printf("Division Result: %d\n", 5/9); // floating point value discarded, because of integer.

    return 0;
}