#include<stdio.h>

/*
    Beware, gets and scanf are vulnerable functions.
    Especially try to avoid using gets.
*/

int main() {
    char firstname[20];
    //char lastname[20];
    printf("Please enter your first and last name: ");
    // you can enter multiple inputs in one scanf with format specifiers
    // scanf("%s %s", firstname, lastname);
    gets(firstname);
    // printf("Hi %s %s, nice to meet you!\n", firstname, lastname);
    printf("Hi %s, nice to meet you!\n", firstname);
    return 0;
}