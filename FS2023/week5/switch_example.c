#include<stdio.h>

int main() {

    //char grade;
    int grade;
    int aCount=0;
    int bCount=0;
    int cCount=0;
    int dCount=0;
    int fCount=0;

    //scanf("%c", &grade);
    int x = 0;

    while((grade = getchar()) != EOF) {
        switch(grade) {
            case 'A':
            case 'a':
                aCount++;
                break;
            case 'B':
            case 'b':
                bCount++;
                break;
            case 'C':
            case 'c':
                cCount++;
                break;
            case 'D':
            case 'd':
                x += 10;
                dCount++;
                break;
            case '\n':
                break;
            case 'f':
                fCount++;
                break;
            default:
                printf("invalid letter!\n");
        }
    }
    
    printf("x:%d\n", x);

    printf("A count: %d\n", aCount);
    printf("B count: %d\n", bCount);
    printf("C count: %d\n", cCount);
    printf("D count: %d\n", dCount);
    printf("F count: %d\n", fCount);

    return 0;
}