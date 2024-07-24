#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));
    int* ptr = NULL;
    ptr = malloc(5*sizeof(int)); // dynamically allocating 5 integer space
    // ptr = calloc(5, sizeof(int));

    for(int i=0; i<5; i++) {
        // scanf("%d", (ptr+i));
        *(ptr+i) = rand()%10;
    }

    for(int i=0; i<5; i++) {
        printf("%d ", *(ptr+i));
    }

    printf("\nsize of dyn. allocated space: %d", (int)sizeof(*ptr));

    free(ptr);

    return 0;
}