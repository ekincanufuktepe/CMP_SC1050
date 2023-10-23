#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define RESPONSES 40
#define SCALE 10 

int main() {

    srand(time(NULL));
    int responses[RESPONSES] = {0};
    int frequencies[SCALE] = {0};

    for(int i=0; i<RESPONSES; i++) {
        responses[i] = (rand()%10) + 1; 
        printf("%d ", responses[i]);
    }

    for(int i=0; i<RESPONSES; i++) {
        ++frequencies[responses[i]-1];
    }

    for(int i=0; i<SCALE; i++) {
        printf("Rate %d: %d\n", (i+1), frequencies[i]);
    }

    return 0;
}