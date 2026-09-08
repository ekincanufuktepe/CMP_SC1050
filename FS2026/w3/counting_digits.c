#include<stdio.h>

int main() {

    // 104%10 = 4
    // 104/10 = 10

    // 10%10 = 0
    // 10/10 = 1

    // 1%10 = 1
    // 1/10 = 0

    int number = 0;
    printf("Enter number: ");
    scanf("%d", &number);

    int digit = 0;

    int num_of_digits = 0;

    int copy_number = number;
    // while(number != 0) {
    while(number) {
        digit = number % 10; // get the last digit
        number = number / 10; // get rid of the last digit
        printf("digit: %d\n", digit);
        num_of_digits = num_of_digits + 1;
    }

    printf("Number of digits: %d\n", num_of_digits);
    int count = num_of_digits - 1;
    int result = 1;
    while(0 < count) {
        result = result * 10;
        count = count - 1;
    }
    printf("Result: %d\n", result);
    int remainder = 0;
    while(result > 0) {
        remainder = copy_number % result;
        printf("Remainder: %d\n", remainder);
        int digit = copy_number / result;
        printf("Digit: %d\n", digit);
        result = result / 10;
        copy_number = remainder;
    }

    17 = 1^2 + 7^2 = 50

    return 0;
}