#include<stdio.h>

int main() {

    int x = 0;
    int y = 0;

    // A short circuit evaluation example.
    // since the first expression (y == 1) is not true, 
    // the other expressions will not be executed 
    // and 'x' will not be incremented. Please test difference scenarios.
    if(y == 1 && ++x == 1) {
        //printf("x:%d, y:%d\n", x, y);
    }
    printf("x:%d, y:%d\n", x, y);
    return 0;
}