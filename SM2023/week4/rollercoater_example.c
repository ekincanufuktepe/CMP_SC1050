#include<stdio.h>

int main() {

    int age = 0;
    int height = 0;

    int age_limit = 11;
    int height_limit = 5;

    printf("How old are you?\n");
    scanf("%d", &age);

    printf("How tall are you?\n");
    scanf("%d", &height);

    if( age >= age_limit && height >= height_limit ) {
        printf("You can hop on the rollercoaster\n");
    }
    else {
        if( age < age_limit) {
            printf("Come back %d years later", (age_limit - age));
        }
        if( height < height_limit) {
            printf("Grow %d more ft\n", height_limit);
        }
    }

    return 0;
}
