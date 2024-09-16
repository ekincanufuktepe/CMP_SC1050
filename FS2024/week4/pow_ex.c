#include<stdio.h>
#include<math.h>

int main() {

    double x;
    double y;

    printf("Enter x^y: ");
    scanf("%lf%lf", &x, &y);

    printf("%lf^%lf = %lf\n", x, y, pow(x, y));

    return 0;
}