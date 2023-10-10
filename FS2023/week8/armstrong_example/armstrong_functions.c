#include "armstrong_functions.h" 

int armstrong(int num) {
    int digits = num_of_digits(num);
    int tmp = num;
    int result = 0;
    for(int i=0; i<digits; i++) {
        int single_digit = get_digit(tmp);
        result += power(single_digit, digits);
        tmp = divide_by_ten(tmp);
    }
    if(result == num) {
        return 1;
    }
    return 0;
}

// x^y
int power(int x, int y) {
    int result = 1;
    for(int i=0; i<y; i++) {
        result = result * x;
    }
    return result;
}

int add(int x, int y) {
    return x + y;
}

int num_of_digits(int num) {
    int count = 0;
    while(num != 0) {
        num = num / 10;
        count++;
    }
    return count;
}

int get_digit(int num) {
    return num % 10;
}

int divide_by_ten(int num) {
    return num / 10;
}
