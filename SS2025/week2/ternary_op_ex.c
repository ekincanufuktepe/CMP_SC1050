#include<stdio.h>

int main() {

    int grade = 95;
    char passLetter = '\0'; // "" == '\0'

    passLetter = grade >= 60 ? 'P' : 'F';

    printf("Your Pass letter: %c\n", passLetter);

    return 0;
}