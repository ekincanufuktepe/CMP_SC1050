#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct person {
    char name[50];
    int age;
    // bad, cannot have a type of itself as a member
    // because it will not be able to determine the size of the struct (nested structs, ends up like an infinite loop)
    //struct person friend; 
    
    // Can have pointers to struct types 
    // because pointers, have address values, and address values are fixed
    struct person* friend; // good
    // Cannot use the typedef version, because it is determined later.
    //Person* friend;
} Person;

int main() {
    Person* ekin;
    // whenever you define a pointer always set it to NULL before usage.
    ekin = NULL;
    // Dynamic allocation, but malloc does not initialize memory
    // However, calloc initializes dynamically allocated space.
    // Use the dereference of a pointer for sizeof, it makes it easier to maintain
    ekin = malloc(sizeof(*ekin));
    strncpy(ekin->name, "Ekincan", 50);
    ekin->age = 12;

    Person* john;
    john = NULL;
    john = malloc(sizeof(*john));
    strncpy(john->name, "John", 50);
    john->age = 13;
    john->friend = ekin;

    printf("John's friend is %s\n", john->friend->name);
    printf("Ekin's friend is %s\n", ekin->friend->name);

    // free memory
    free(ekin);
    free(john);

    Person* people;
    people = NULL;
    // Create an array of 5 Person, where people has the address to the first element
    people = calloc(5, sizeof(*people)); // Person people[5];

    // set the first element's name with string value "John"
    strncpy(people->name, "John", 50);
    // set the first element's age with 13
    people->age = 13;
    printf("Person Name: %s\n", people->name);

    // set the second element's name with string value "Jane"
    // The +1 will increment by the (type*1)
    // So if there is +2, it will increment by (type*2)
    strncpy((*people+1).name, "Jane", 50);
    (people+1)->age = 14;
    printf("Person Name: %s\n", (people+1)->name);


    // strncpy(people[0].name, "John", 50);
    // people[0].age = 13;
    // printf("Person Name: %s\n", people[0].name);
    
    // strncpy(people[1].name, "Jane", 50);
    // people[1].age = 14;
    // printf("Person Name: %s\n", people[1].name);

    // free memory
    free(people);

    return 0;
}