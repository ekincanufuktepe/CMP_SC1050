#include<stdio.h>

int main() {

    int grade;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;

    while((grade = getchar()) != EOF) {
        switch(grade) {
            case 'A':
            case 'a':
                ++aCount;
                break;
            case 'B':
            case 'b':
                ++bCount;
                break;
            case 'C':
            case 'c':
                ++cCount;
                break;
            case 'D':
            case 'd':
                ++dCount;
                break;
            case 'F':
            case 'f':
                ++fCount;
                break;
            case '\n':
            case '\t':
            case ' ':
            default:
                printf("Invalid character!\n");
                break;
        }
    }
    printf("Done with switch case\n");
    printf("Number of As: %d\n", aCount);
    printf("Number of Bs: %d\n", bCount);
    printf("Number of Cs: %d\n", cCount);
    printf("Number of Ds: %d\n", dCount);
    printf("Number of Fs: %d\n", fCount);

    return 0;
}