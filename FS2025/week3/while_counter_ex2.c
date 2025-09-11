#include<stdio.h>

// 3! = 6 = 3 x 2 x 1
// 4! = 24 = 4 x 3 x 2 x 1
// 0! = 1

int main() {

    // int result = 1; // needs attention!
    // int num = 0;
    // int counter = 1;

    // printf("Enter number for factorial: ");
    // scanf("%d", &num);

    // while(counter <= num) {
    //     result = result * counter;
    //     counter = counter + 1;
    // }

    int result = 1;
    int num = 0;
    printf("Enter number for factorial: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Your number is negative\n");
    }
    else {
        while(num != 0) {
            result = result * num;
            num = num - 1;
        }
        printf("Factorial result: %d\n", result);
    }
    
    return 0;
}