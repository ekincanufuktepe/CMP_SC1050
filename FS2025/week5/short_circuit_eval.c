#include<stdio.h>

int main() {

    int x = 0;
    int y = 0;

    // if(x || y++) {
    //     printf("inside if-statement\n");
    // }

    int a = 1;
    int b = 0;
    int c = 0;

    // if(a || b++ && c++) { // ===> if(a || (b && c)), z = (b && c) --> if(a || z) 
    // if(a && b++ || c++) {   // ==> if((a && b++) || c++)
    if(a && ++b || c++) {   // ==> if((a && b++) || c++)
        printf("test\n");
    }

    printf("a: %d, b: %d, c: %d\n", a, b, c);

    // if(x && y++) {
    //     printf("inside if-statement\n");
    // }
    
    // printf("x: %d, y: %d\n", x, y);
}