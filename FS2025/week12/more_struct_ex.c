#include<stdio.h>
#include<string.h>

struct person {
    char name[50];
    // char initial;
    int age;
    // double salary; 
};

// typedef struct person {
//     char name[50];
//     // char initial;
//     int age;
//     // double salary; 
// } Person;

typedef struct person Person;

int isSamePerson(struct person p1, struct person p2);
int isSamePersonWRef(Person* p1, Person* p2);

int main() {
    
    struct person p1;
    // printf("Size of struct person: %lu\n", sizeof(p1));
    p1.age = 20;
    strcpy(p1.name, "ekincan");
    printf("Person p1 age: %d\n", p1.age);
    printf("Person p1 name: %s\n", p1.name);

    struct person p2 = {"ekincan", 20};
    printf("Person p2 age: %d\n", p2.age);
    printf("Person p2 name: %s\n", p2.name);

    struct person* p3;
    p3 = &p2;

    isSamePerson(p2, *p3);
    isSamePersonWRef(&p2, p3);

    strcpy(p3->name, "jane");
    isSamePersonWRef(&p2, p3);
    printf("Person p3 pointer age: %d\n", p3->age);
    printf("Person p3 pointer name: %s\n", p3->name);
    printf("Person p2 name: %s\n", p2.name);

    // printf("person p2: %p\n", &(p2.name[0]));
    // printf("person p2: %p\n", &p2);

    // struct person p3 = {"Jane"};
    // // p3.age = 25;
    // printf("Person p3 age: %d\n", p3.age);
    // printf("Person p3 name: %s\n", p3.name);


    return 0;
}

int isSamePerson(struct person p1, struct person p2) {
  if(strcmp(p1.name,p2.name) == 0 && p1.age == p2.age) {
        //printf("they are same\n");
        return 1;
    }
    else {
        //printf("They are different\n");
        return 0;
    }
}

int isSamePersonWRef(Person* p1, Person* p2) {
  if(strcmp(p1->name, p2->name) == 0 && p1->age == p2->age) {
        //printf("they are same\n");
        return 1;
    }
    else {
        //printf("They are different\n");
        return 0;
    }
}