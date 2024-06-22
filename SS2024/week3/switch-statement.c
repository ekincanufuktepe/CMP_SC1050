#include<stdio.h>

int main() {

    int grade; // for getchar input
    // char grade; // for scanf input 
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    char num = '1';
    printf("Ascii value of 1: %d\n", num);
    int x = 65;
    printf("Char value: %c\n", x);

    // scanf("%c", &grade);
    //while(grade != 'e') {
    // EOF: End of File
    while((grade = getchar()) != EOF) {
        switch(grade) {
            case 'A':
            case 'a':
                aCount++;
                break; // helps exit switch case, but later we will see that we can use them to exit the closest loops.
            case 'b':
            case 'B':
                bCount++;
                break;
            case 'C':
            case 'c':
                cCount++;
                break;
            case 'D':
            case 'd':
                dCount++;
                break;
            case 'F':
            case 'f':
                fCount++;
                break;
            case '\n': // to handle the new line inputs when submitting a character input
            //    printf("Detected new line character!\n");
                break;
            default:
                printf("Invalid input: %d\n", grade);
                break;
        }
        // scanf("%c", &grade); // use only if you are using scanf and char grade
    }

    printf("======= GRADE STATS =======\n");
    printf("# of A's: %d\n", aCount);
    printf("# of B's: %d\n", bCount);
    printf("# of C's: %d\n", cCount);
    printf("# of D's: %d\n", dCount);
    printf("# of F's: %d\n", fCount);
    printf("===========================\n");

    return 0;
}