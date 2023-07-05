#include<stdio.h>

// define function prototypes
int find_number_of_digits(int);
int get_digit(int);
int power(int, int);
int addition(int, int);
int is_armstrong(int, int);


int main() {
    int armstrong_number = 371;
    int number_of_digits = find_number_of_digits(armstrong_number);
    //printf("%d\n", find_number_of_digits(armstrong_number));
    int tmp_armstrong_number = armstrong_number;

    int digit = -1;
    int addition_result = 0;
    for(int i=0; i<number_of_digits; i++) {
        digit = get_digit(tmp_armstrong_number);
        printf("Digit: %d\n", digit);
        printf("Power of digit: %d\n", power(digit, number_of_digits));
        addition_result = addition(addition_result, power(digit, number_of_digits));
        tmp_armstrong_number = tmp_armstrong_number/10;
    }
    printf("Result: %d\n", addition_result);

    if(is_armstrong(armstrong_number, addition_result)){
        printf("This is an armstrong number!\n");
    }
    else {
        printf("This is NOT an armstrong number!\n");
    }

    return 0;
}

int find_number_of_digits(int initial_value) {
    int number_of_digits = 0;
    while (initial_value != 0) {
        initial_value = initial_value/10;
        ++number_of_digits;
    }
    return number_of_digits;
}

int get_digit(int initial_value) {
    return initial_value%10;
}

int power(int x, int y) {
    int result = 1;
    for(int i=0; i<y; i++) {
        result = result * x;
    }
    return result;
}

int addition(int result, int value) {
    result = result + value;
    return result;
}

int is_armstrong(int original_value, int calculated_value) {

    if(original_value == calculated_value) {
        return 1;
    }
    return 0;
}
