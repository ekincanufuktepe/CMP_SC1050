#include<stdio.h>

int main() {

    int x = 5;
    int y = 7;
    // short-circuit evaluation
    // y++ will not be executed, because the first expression is false, and the value of the second expression is insignificant
    // the if-statement will be false no matter what the second expression is.
    if(x == 6 && y++) {
        printf("In if-statement\nx:%d, y:%d\n", x, y);
    }

    printf("Outside of if-statement\nx:%d, y:%d\n\n\n\n", x, y);


    // short-circuit evaluation example #2 (using or operator)
    if(!(x != 5) || (y += 5)) {
        printf("Inside if-statement (OR-operator)\n"); 
        printf("x:%d, y:%d\n", x, y);
    }

     printf("(After OR-logic) Outside of if-statement\nx:%d, y:%d\n\n\n\n", x, y);

    return 0;
}