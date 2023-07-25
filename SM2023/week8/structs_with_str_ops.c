#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {

    // structs can be implemented within functions, but its accessibility will be limited
    struct person {
        char name[50];
        double salary;
        int age;
    };

    // alternative typedef usage, they don't need to be with the struct definition
    typedef struct person Person; 

    Person* p1;
    Person p2 = {"Ekincan", 1.0, 12}; // alternative to initialize structs

    p1 = malloc(sizeof(*p1));
    p1->age = 4;
    p1->salary = 10000;
    
    // an altenative way to initialize a string (char[]) variable
    strncpy(p1->name, "Jane", sizeof(p1->name));
    //printf("age: %d\n", p1->age);
    // (*p1).age = 5;               // alternative way to access a member of struct.
                                    // Remember -> is for address, . is for non-address
    // printf("age: %d\n", p1->age);
    // printf("age: %d\n", (*p1).age);

    printf("%s, %lf, %d\n", p1->name, p1->salary, p1->age);
    printf("%s, %lf, %d\n", p2.name, p2.salary, p2.age);

    // compare two strings if they are equal
    // if strncmp return 0, it means that they are equal
    // if strncmp returns a non-zero value, it means the two strings are not equal
    if(strncmp(p1->name, "Jane", sizeof(p2.name)) == 0) {
        printf("Welcome back Jane!\n");
    }
    else {
        printf("Hey you are not Jane, back off!\n");
    }

    // Get the string length with strlen
    printf("Length of string for p1 %ld\n", strlen(p1->name));
    printf("Length of string for p2 %ld\n", strlen(p2.name));

    free(p1);

    return 0;
}