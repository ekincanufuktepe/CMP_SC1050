#include<stdio.h>

int main() {

    int x = 0;

    // GOOD PRACTICE: have constant on left, and variable on right
    if(1 == x) {
        printf("Inside if-statement\n");
    }
    printf("Outside if-statement\n");

    return 0;
}