#include<stdio.h>

// enum months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL,
//                 AUG, SEP, OCT, NOV, DEC};

typedef enum months { JAN=1, FEB, MAR, APR, MAY, JUN, JUL,
                        AUG, SEP, OCT, NOV, DEC} Months;


int main() {
    // enum months month = NOV;

    char* month_names[20] = {"January", "February", "March", "April",
                                "May", "June", "July", "August", 
                                "September", "October", "November", "December"};
    Months month = NOV;
    printf("Enum value: %d\n", month);

    for(Months month=JAN; month<=DEC; month++) {
         printf("Month ID: %d, Month Name: %s\n", month, month_names[month-1]);
    }
    return 0;
}