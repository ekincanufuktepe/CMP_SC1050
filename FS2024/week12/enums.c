#include<stdio.h>

enum courses {ECE=5, CS, ME};

typedef enum courses CourseCode;

int main() {

    // enum courses courseCode;
    CourseCode courseCode;
    courseCode = ECE;
    CourseCode courseCodeArray[3] = {ECE, CS, ME};

    printf("Course Code: %d\n", courseCode);


    return 0;
}