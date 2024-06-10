#include<stdio.h>

int main() {
	// define variables
	int birth_year;
	int current_year = 2024;
	printf("First Lab of CS1050\n");
	// Asking user to enter birth year
	printf("Please enter your birth year: ");
	// Allow user to input the birth year
	scanf("%d", &birth_year);
	// printing the size of the birth_year variable in bytes
	printf("Size of birth_year: %d\n", ((int)sizeof(birth_year)));
	// printing the address of the birth_year variable in hexadecimal
	printf("Address of variable 'birth_year' (in decimal): %p\n", &birth_year);
	// defining integer variable age, calculating the assigning the age value.
	int age = current_year - birth_year;
	// printing the calculated age
	printf("Your age is: %d\n", age);
	return 0;
}
