#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main() {

    srand(time(NULL));
    int rand_num = rand()%10;
    printf("Random number: %d\n", rand_num);

    return 0;

}