#include<stdio.h>

// enum months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

// you can use typedef on enums as well for giving them a type name to easily define them
typedef enum months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC} MONTHS ;

int main() {

    char* month_names[25] = {"", "January", "February", "March", "April", "May", "June",
                                "July", "August", "September", "October", "November", "December"};

    //enum months month = APR;
    MONTHS month = APR;
    // printf("%d\n", month+FEB);
    for(month=JAN; month<=DEC; ++month) {
        printf("%d - %s\n",month, month_names[month]);
    }
    
    return 0;
}