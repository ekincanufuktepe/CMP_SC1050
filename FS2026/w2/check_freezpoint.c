#include<stdio.h>

int main() {

    double temp = 0;
    puts("Enter temperature in Fahrenheit: ");
    scanf("%lf", &temp);

    int freeze = -1;
    if(temp <= 32) {
        puts("WARNING: You have reached the freezing point");
        if(temp <= 0) {
            puts("CRITICAL: Don't leave home!");
            printf("Freeze status: %d\n", freeze);
        }
        freeze = 1;
    }
    else {
        freeze = 0;
        puts("All good, no freezing point"); 
    }
    printf("Freeze status: %d\n", freeze);

    return 0;
}