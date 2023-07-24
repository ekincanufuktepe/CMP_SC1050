#include<stdio.h>

struct abc {
    char z;     // member
    int x;      // member
    double y;   // member
};

int main() {

    struct abc var;
    var.z = 'a';
    var.x = 5;
    var.y = 1.2;
    //printf("%d\n", (int)sizeof(var));

    printf("var.z: %c\n", var.z);
    printf("var.x: %d\n", var.x);
    printf("var.y: %lf\n", var.y);

    struct abc* var2;
    var2 = NULL;
    var2 = &var;

    var2->x = 1;
    var2->y = 2.3;
    var2->z = 'z';

    printf("var2.z: %c\n", var2->z);
    printf("var2.x: %d\n", var2->x);
    printf("var2.y: %lf\n", var2->y);

    printf("var.z: %c\n", var.z);
    printf("var.x: %d\n", var.x);
    printf("var.y: %lf\n", var.y);

    return 0;
}