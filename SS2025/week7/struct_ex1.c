#include<stdio.h>
#include<string.h>

// struct someType {
//     int x;
//     double z;
//     char y;
//     char w;
// };

struct person {
    char name[25];
    char lastname[25];
    int age;
    struct person* friend;
};

typedef struct person Person;

// typedef struct person {
//     char name[25];
//     char lastname[25];
//     int age;
//     struct person* friend;
// } Person;

// typedef struct {
//     char name[25];
//     char lastname[25];
//     int age;
//     struct person* friend;
// } Person;



int main() {

    // printf("Sizeof someType: %ld\n", sizeof(struct someType));

    Person p1;
    Person* p2;
    Person p3 = {"john", "wayne", 45, &p1};
    // Person p3 = {.age=45, &p1};

    printf("Age of Person: %d\n", p3.age);
    printf("Name of Person: %s\n", p3.name);

    p2 = &p1;

    p1.age = 20;
    //strcpy(p1.name, "ekincan"); // vulnerable
    strncpy(p1.name, "ekincan", 25); // secure version

    printf("Age of Person: %d\n", p1.age);
    printf("Name of Person: %s\n", p1.name);

    printf("Age of Person: %d\n", p2->age);
    printf("Name of Person: %s\n", p2->name);

    printf("Age of Person: %d\n", (*p2).age);
    printf("Name of Person: %s\n", (*(&(*p2))).name);

    printf("Friend of %s is %s\n", p3.name, p3.friend->name);

    return 0;
}