#include<stdio.h>

int main() {

    char letter = 'a';
    letter = letter - 1;

    int letter_in_int = 97;

    printf("int value of '%c': %d\n", letter_in_int, letter_in_int);

    int tab = 7;
    int a = 'a';
    int del = 127;

    printf("%c%c%c%c\n", tab, a, del, del);

    return 0;
}