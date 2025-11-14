#include<stdio.h>

struct pokemon {
    int id;
    char type[18];
    char region[19];
};

struct myData {
    char y;
    double z;
    int x;
};

int main() {

    printf("sizeof pokemon %lu\n", sizeof(struct pokemon));

    struct pokemon squirtle = {7, "water", "kanto"};

    printf("sizeof squirtle %lu\n", sizeof(squirtle));
    printf("id of squirtle: %d\n", squirtle.id);
    printf("type of squirtle: %s\n", squirtle.type);
    printf("region of squirtle: %s\n", squirtle.region);

    // struct myData var = {3, 'a'};
    // struct myData var = { .y='z', .x=7};
    struct myData var;
    var.x = 8;
    var.y = 'o';
    printf("myData content x: %d, y: %c\n", var.x, var.y);

    printf("sizeof myData %lu\n", sizeof(struct myData));

    return 0;
}