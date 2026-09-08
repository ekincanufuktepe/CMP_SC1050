#include<stdio.h>

int main() {

    int counter = -2;
    int x = 0;
    char letter = 'a';
    printf("ASCII value of 'a': %d\n", letter);

    // while(counter == counter + 1){
    //     // printf("I will run forever...\n");
    //     printf("counter: %d\n", counter);
    // }

    while(x < 5) {
        printf("x: %d, (x<5): %d\n", x, (x<5));
        x = x + 1;
    }
    printf("(F) x: %d, (x<5): %d\n", x, (x<5));

    return 0;
}