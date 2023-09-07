#include<stdio.h>

int main(void) {
    double x;
    double y;

    printf("Enter 1st int: ");
    scanf("%lf", &x);
    printf("Enter 2nd int" );
    scanf("%lf", &y);

    double z = x/y;

    printf("Dividing %lf/%lf: %lf\n", x, y, z);

    return 0;
}