#include<stdio.h>
#include<math.h>

// define prototype of the function, all prototypes are valid
int power(int, int);
// int power(int input_1, int input_2);
// int power(int x, int y);

int main() {

    double x = 2.0;
    double y = 5.0;
    double result = 0;

    printf("%d\n", (-13%3));

    // int alt_result = power(x, y);
    printf("Alternative power function result: %d\n", power(x, y));

    result = pow(x, y);
    printf("Result: %lf\n", result);
    return 0;
}

// Our custom power function, own implementation
int power(int input_1, int input_2) {
    int result = 1;
    for(int i=0; i<input_2; i++) {
        result = result * input_1;
    }
    return result;
}
