#include<stdio.h>

int main(void) {

    int x1, y, z;
    //int y;

    //x = 20;
    printf("Enter the first integer value: ");
    scanf("%d", &x1);
    

    printf("Enter the second integer value: ");
    scanf("%d", &y);

    //int z = x + y;

    //int z;
    z = x1 + y;

    printf("x:%d, y:%d, z:%d\n", x1, y, z);

    return 0;
}