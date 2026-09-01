#include<stdio.h>

int main() {

    int seconds = 0;
    float minutes = 0;
    float hours = 0;
    float days = 0;
    
    printf("Enter hours: ");
    scanf("%f", &hours);
    int div = 0;
    scanf("%d", &div);

    days = hours/div;
    minutes = hours * 60;
    seconds = hours * 60 * 60; // seconds = minutes * 60;

    printf("Seconds: %d\n", seconds);
    printf("Minutes: %.10f\n", minutes);
    printf("Hours: %f\n", hours);
    printf("Days: %f\n", days);

    return 0;
}