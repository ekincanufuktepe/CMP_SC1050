#include<stdio.h>

// prototype of the isPrime function
int isPrime(int);

int main() {
    int num = 12;
    printf("Prime status for %d: %s\n", num, isPrime(num) ? "Yes" : "No");
    return 0;
}

int isPrime(int number) {
    int upper_bound = number/2;
    int notPrime = 0;
    for(int i=2; i<=upper_bound; i++) {
        if(number % i == 0) { // if never true, notPrime will remain 0, which means the number is prime
            printf("Not prime, here is why: %d\n", i);
            notPrime = 1; // sets it to true (1) if the number is detected as "not prime"
        }
    }
    // the function is named "isPrime", and we use notPrime, so we have get the complement of the notPrime
    return !notPrime; 
}