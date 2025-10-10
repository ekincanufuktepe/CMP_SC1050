#include "static_var.h"

int main() {

    printf("%d\n", inc());
    printf("%d\n", inc());
    printf("%d\n", inc());
    printf("%d\n", inc());
    printf("%d\n", inc());

    // _exam_handler(1, 12);
    printf("Set Exam 1: %d\n", set_exam1(80));
    printf("Get Exam 1: %d\n", get_exam1());
    printf("Get Exam 2: %d\n", get_exam2());
    printf("Set Exam 2: %d\n", set_exam2(90));

    printf("Average: %d\n", average_of_exams());

    printf("Set Exam 1: %d\n", set_exam1(100));
    printf("Average: %d\n", average_of_exams());

    return 0;
}