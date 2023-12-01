#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct person {
    int age;
    char name[25];
} Person;

void printfNamesByAgeCriteria(Person* people_list, int age_criteria, int total_num_of_people);
void printfNamesByAge(Person* people_list, char* name, int total_num_of_people);
void printNameLengths(Person* people_list, int total_num_of_people);

/*
    int argc: (Argument count)Is the number of arguments you pass to the program.
                Whenever you run the program without any additional arguments
                by default you will have your argc set to 1.
    
    char* argv[]: (Argument vector) Has the arguments you passed to the program.
                    The first one argv[0] is your is your executable
                    The rest is the arguments you passed. Each argument is seperated by whitespaces.

    Example to run: ./a.out data.xsl
    
    Values of argc, and argv after execution
    argc: 2
    argv[0]: ./a.out
    argv[1]: data.xsl
*/
int main(int argc, char* argv[]) {

    // error check, make sure you passed 2 arguments
    if (argc != 2) {
        fprintf(stderr, "You need 2 arguments!");
        return 300;
    }

    //
    FILE* fPtr;

    // Use the line below if you are not using command-line arguments
    // fPtr = fopen("./data.xsl", "r");

    // Use the line below if you are using command-line arguments to pass the file information
    // argv[1] should be your file that you are going to read (data.xsl)
    fPtr = fopen(argv[1], "r");

    // error check for file openning.
    if(fPtr == NULL) {
        fprintf(stderr, "Cannot open file!\n");
        return 500;
    }

    int age = 0;
    char name[25] = {0};
    
    int num_of_people = 0;
    // char* line;
    char line[50];
    // count the number of people in the file based on the lines in the file
    while(!feof(fPtr)) {
       num_of_people++;
       //fscanf(fPtr, "%s", line);
       fgets(line, 50, fPtr);
    }
    
    printf("Number of people: %d\n", num_of_people);

    // pointer to the people data
    Person* people;
    people = NULL;
    // allocate space based on the number of people read from the file 
    people = calloc(num_of_people, sizeof(*people));

    // reset the file pointer to the top of the file.
    rewind(fPtr);

    // read file and assign the data to the dynamically allocated space
    int index = 0;
    while(!feof(fPtr)) {
       fscanf(fPtr, "%s%d", (people + index)->name, &((people + index)->age));
       index++;
    }

    // print the data through the dynamically allocated space and pointer
    // by using pointer arithmetic
    for(int i=0; i<num_of_people; i++) {
        printf("Name: %s, Age: %d\n", (people+i)->name, (people+i)->age);
    }

    // Print the people who are below age 20
    printf("People who are below age 20\n");
    printfNamesByAgeCriteria(people, 20, num_of_people);
    
    // Find Amanda's age
    printf("Find Amanda's age:\n");
    printfNamesByAge(people, "Amanda", num_of_people);

    // Print the name length for each person
    printf("People by their name length:\n");
    printNameLengths(people, num_of_people);
    
    // free memory
    free(people);
    // close file
    fclose(fPtr);

    return 0;
}


void printfNamesByAgeCriteria(Person* people_list, int age_criteria, int total_num_of_people) {
    for(int i=0; i<total_num_of_people; i++) {
        if((people_list+i)->age < age_criteria) {
        // if(people_list[i].age < age_criteria) {
            printf("Name: %s\n", (people_list+i)->name);
        }
    }
}

void printfNamesByAge(Person* people_list, char* name, int total_num_of_people) {
     for(int i=0; i<total_num_of_people; i++) {
        // String compare to find the matching names
        // if strcmp returns 0, there is a match
        // if returns non-zero, there is no match
        if(strcmp((people_list+i)->name, name) == 0) {
            printf("Age of %s, is %d\n", name, (people_list+i)->age);
        }
    }
}

void printNameLengths(Person* people_list, int total_num_of_people) {
    for(int i=0; i<total_num_of_people; i++) {
        // Usage for strlen to find the length of a string
        printf("Name of %s, has %d characters\n", (people_list+i)->name, (int)strlen((people_list+i)->name));
    }
}