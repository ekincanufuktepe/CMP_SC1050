#include<stdio.h>
#include<stdlib.h>

// To reduce side-effects
#define SIZE 5

int find_max(int[], long unsigned int);
int find_min(int[], long unsigned int);
void print_grades(int[], long unsigned int);
int size(int student_grades[]);

int main() {

    // Size given initially
    //int grades[SIZE] = {55, 60, 90, 100, 45};
    // Size figured out based on the initializers
    int grades[] = {0, 55, 60, 90, 0, 100, 45, 88, 24, 56};
    
    printf("Size of char: %ld\n", sizeof(char));
    
    // A simple way to calculate a size of array using the sizeof function
    printf("Number of elements in array: %ld\n", sizeof(grades)/sizeof(grades[0]));
    long unsigned int list_size = sizeof(grades)/sizeof(grades[0]);   
    //printf("Size of array: %d\n", size(grades));
    printf("Max student grade: %d\n", find_max(grades, list_size));
    printf("Min student grade: %d\n", find_min(grades, list_size));
    print_grades(grades, list_size);
    return 0;
}

void print_grades(int grades[], long unsigned int size) {
    for(int i=0; i<size; i++) {
        printf("Student #%d\t%d\n", i, grades[i]);
    }
}

int find_max(int student_grades[], long unsigned int size) {
    int max = student_grades[0];

    for(int i=0; i<size; i++) {
        if(max < student_grades[i]) {
            max = student_grades[i];
        }
    }

    return max;
}

int find_min(int student_grades[], long unsigned int size) {
    int min = student_grades[0];
    for(int i=size-1; i>=0; i--) {
        if(min > student_grades[i]) {
            min = student_grades[i];
        }
    }
    return min;
}

//  You cannot calculate the size of an array through a function
// int size(int student_grades[]) {
//     int length = sizeof(student_grades)/sizeof(student_grades[0]);
//     return length;
// }

/*
    The only way to calculate the size of an array is adding a sentinel
    or dummy variable that indicates it is the end of your array. However,
    This is considered as a bad practice!
*/
int size(int student_grades[]) {
    int i=0;
    while(student_grades[i] != -1) {
        ++i;
    }
    return i;
}