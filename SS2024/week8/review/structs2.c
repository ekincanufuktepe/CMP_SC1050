#include<stdio.h>
#include<string.h>

typedef struct person {
    char name[20]; 
    struct person *friend;
} Person;

int main() {

    Person michael;
    Person ekin;
    scanf("%s", michael.name);
    // strncpy(michael.name, "michael", 20);
    strncpy(ekin.name, "ekin", 20);

    printf("Person name: %s\n", michael.name);
    michael.friend = &ekin;
    printf("Michael's friend: %s\n", michael.friend->name);

    return 0;
}