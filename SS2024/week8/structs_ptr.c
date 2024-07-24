#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// struct student {
//     char firstname[20];
//     int grades[3];
//     double GPA;
// };

// typedef struct student Student;

typedef struct student {
    char firstname[20];
    int grades[3];
    double GPA;
} Student;

int main() {

    Student* student1 = NULL;
    student1 = malloc(sizeof(*student1));

    printf("Size: %d\n", (int)sizeof(student1));
    student1->GPA = 3.33;
    // (*(&(*student1))).GPA = 3.33;
    printf("GPA: %lf\n", student1->GPA);
    // // scanf("%lf", &student1.GPA);
    // // printf("GPA: %lf\n", student1.GPA);

    // student1.grades[0] = 90;
    // student1.grades[1] = 91;
    // student1.grades[2] = 92;
    student1->grades[0] = 90;
    student1->grades[1] = 91;
    student1->grades[2] = 92;

    // // student1.firstname = "ekincan";
    strcpy(student1->firstname, "ekincan"); 
    // strncpy(student1.firstname, "ekincan", 20);    

    // printf("Student name: %s\n", student1.firstname);
    // printf("Student grades: ");
    // for(int i=0; i<3; i++) {
    //     printf("%d ", student1.grades[i]);
    // }
    // printf("\n");
    // printf("Student GPA: %lf\n", student1.GPA);

    printf("Student name: %s\n", student1->firstname);
    printf("Student grades: ");
    for(int i=0; i<3; i++) {
        printf("%d ", student1->grades[i]);
    }
    printf("\n");
    printf("Student GPA: %lf\n", student1->GPA);
    free(student1);
    return 0;
}