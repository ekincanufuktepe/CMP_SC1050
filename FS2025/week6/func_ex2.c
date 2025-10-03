#include<stdio.h>

int reverse_number(int num);

int main() {
    int x = 1720;
    x = reverse_number(x);
    printf("Reversed x: %d\n", x);
    return 0;
}

int reverse_number(int num) {

    int reverse_num = 0;
    
    while(num != 0) {
        int remainder = num % 10;
        reverse_num = reverse_num * 10 + remainder;
        num = num / 10;
        // printf("reverse num: %d\n", reverse_num);
    }

    return reverse_num;
}