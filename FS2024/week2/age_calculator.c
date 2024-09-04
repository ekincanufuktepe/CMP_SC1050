#include<stdio.h>

int main() {
    int birth_year = 0; // this is a snake_case naming convention
    // int birthYear; // this is a CamelCase naming convention example
    printf("Enter birth year: ");
    scanf("%d", &birth_year);   // scanf requires an address of your variables

    int age = 0;
    age = 2024 - birth_year;

    printf("You were born in %d. So, you are %d years old!\n", &birth_year, age);

    return 0;
}