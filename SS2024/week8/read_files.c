#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct student {
    char name[20];
    int grades[3];
} Student;

// argc: argument count, argv: argument vector
// by default you have at least one argument count which is the executable image.

// How to run it: ./a.out 'your-filename'
// Example: ./a.out student_grades.txt
// argc: 2, argv[0]: "./a.out", argv[1]: "student_grades.txt"

int main(int argc, char* argv[]) {

    printf("Argument count: %d\n", argc);
    printf("Argument vector[0]: %s\n", argv[0]);
    printf("Argument vector[1]: %s\n", argv[1]);

    srand(time(NULL));
    Student students[3];

    strncpy(students[0].name, "Ekincan Ufuktepe", 20);
    strncpy(students[1].name, "Michael Bolek", 20);
    strncpy(students[2].name, "Dylan Rothwell", 20);

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            students[i].grades[j] = rand()%101;
        }
    }

    for(int i=0; i<3; i++) {
        printf("Student #%d name: %s\n", (i+1), students[i].name);
        printf("Student #%d grades: ", (i+1));
        for(int j=0; j<3; j++) {
            printf("%d ", students[i].grades[j]);
        }
        printf("\n\n");
    }

    FILE* fPtr;

    if((fPtr = fopen(argv[1], "w+")) == NULL) {
        fprintf(stderr, "Couldn't open student_grades.txt file!\n");
        return -1;
    }

    // Writing struct data to file
    for(int i=0; i<3; i++) {
        fprintf(fPtr, "%s ", students[i].name);
        // fprintf(fPtr, "Student #%d grades: ", (i+1));
        for(int j=0; j<3; j++) {
            fprintf(fPtr, "%d ", students[i].grades[j]);
        }
        fprintf(fPtr, "\n");
    }

    rewind(fPtr); // set the pointer back to the beginning

    // Reading student_grades.txt file
    int line = 0;
    char highest_grade_std[20];
    int high_grade = 0;
    while(!feof(fPtr)) {
        char firstname[20];
        char lastname[20];
        int grades[3];
        fscanf(fPtr, "%s%s%d%d%d", firstname, lastname, &grades[0], &grades[1], &grades[2]);
        // // fgets(file_text, 100, fPtr);
        // printf("Line #%d: %s\n", ++line, file_text);
        for(int i=0; i<3; i++) { 
            if(high_grade < grades[i]) {
                strncpy(highest_grade_std, firstname, 20);
                strcat(highest_grade_std, " ");
                strcat(highest_grade_std, lastname);
                high_grade = grades[i];
            }
        }
    }

    printf("Top grade from %s, with %d\n", highest_grade_std, high_grade);

    // char* data = "Ekincan Robin Ufuktepe 12 23 34";
    // const char* delim = " ";
    // char* tokens = strtok(data, delim);
    // printf("%s\n", tokens);

    fclose(fPtr);
    return 0;
}