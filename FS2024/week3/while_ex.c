#include<stdio.h>
// Adding interger number from 1 to 100.
// Formula: (n*(n+1))/2
// (101 * 100) / 2 = 5050

int main () {

    int num = 1;
    int sum = 0;

    // Counter controlled loop example: you know exactly how many times it will repeat
    while( num < 101) { // terminating condition
        printf("%d\n", num); 
        sum = sum + num; // adding all the numbers from 1 to 100, to variable sum (one at a time)
        num = num + 1;  // increment numbers to generate from 1 to 100.
    }

    printf("Sum is: %d\n", sum);

    return 0;
}
