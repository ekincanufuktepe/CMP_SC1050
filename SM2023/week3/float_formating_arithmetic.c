#include<stdio.h>
#include<math.h> // Don't forget to compile with the -lm option!

int main() {
    float x = 14.232;
    float y = 18.673;
    
    printf("Result: %f\n", x + y);
    printf("Result: %.2f\n", x + y);
    printf("Result: %.2f\n", floor(x + y));
    printf("Result: %.2f\n", ceil(x + y));

    return 0;
}