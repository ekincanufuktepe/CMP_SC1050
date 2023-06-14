#include<stdio.h>

int main() {

    float grade = 90.1;
    printf("%f\n", grade);

    if ( grade >= 90 ) {
        printf( "A\n" );
        printf("Congrats!\n");
    }
    else if ( grade >= 80 )
        printf( "B\n" );
    else if ( grade >= 70 )
        printf( "C\n" );
    else if ( grade >= 60 )
        printf( "D\n" );
    else
        printf( "F\n" );


    return 0;
}