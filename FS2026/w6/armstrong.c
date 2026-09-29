#include "armstrong.h"
// 123 => 3 digits

// 1^3 + 2^3 + 3^3 == 123 // this is an armstrong number

int armstrong_check(int number) {
    int copy_num = number;
    int num_of_digits = count_digits(copy_num);
    int sum = 0;
    for(int i=0; i<num_of_digits; i++) {
        int digit = get_digit(copy_num);
        copy_num /= 10;
        sum += power(digit,num_of_digits);
    }
    return number == sum;
}

int count_digits(int number) {
    int count = 0;
    while(number != 0) {
        number = number / 10;
        count++;
    }
    return count;
}

int get_digit(int number) {
    return number % 10;
}

int power(int x, int y) {
    int result = 1;
    for(int i=0; i<y; i++) {
        result *= x;
    }
    return result;
}
