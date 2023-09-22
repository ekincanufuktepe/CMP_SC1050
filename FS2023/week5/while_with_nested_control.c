#include<stdio.h>

int main() {

    int passes = 0;
    int fails = 0;
    int num_of_students = 10;
    int count = 0;
    int grade = 0;

    while(count < num_of_students) {
        printf("Enter 1 for pass, 2 for fail\n");
        scanf("%d", &grade);

        if(grade == 1) {
            //passes = passes + 1;
            passes += 1;
            //count = count + 1;
            count += 1;
        }
        else if(grade == 2) {
            //fails = fails + 1;
            fails++;
            //count = count + 1;
            ++count;
        }
        else {
            printf("Invalid input, you can only enter 1 or 2\n");
        }
    }

    printf("%d students passed\n", passes);
    printf("%d students failed\n", fails);

    if(passes > 8) {
        printf("Kudos to the instructor!\n");
    }

    return 0;
}