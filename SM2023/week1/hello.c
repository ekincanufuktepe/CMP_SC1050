#include<stdio.h>

int main() {

    // defining a integer age varible
    int number_of_steps; //snake case
    int numberOfSteps; // Camel case
    unsigned int age;
    scanf("%u", &age);
    printf("I am %u years old!\n", age);

    printf("Details of the age variable:\n");
    printf("Value of age: %u\n", age);
    printf("Address of age: %p\n", &age);

    
    return 0;
}