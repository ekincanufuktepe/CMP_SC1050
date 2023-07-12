#include<stdio.h>

#define RESPONSES 40
#define FREQUENCY 10

int main() {

    int responses[RESPONSES] = {1,7,8,9,4,5,7,8,9,3,
                                4,5,6,7,8,2,3,3,2,9,
                                7,7,6,4,5,3,3,1,2,1,
                                9,4,5,9,9,2,4,1,1,7};
    int frequency[FREQUENCY] = {0};

    /*
        Solution #1 - using switch cases
    */
    // for(int i=0; i<RESPONSES; ++i) {
    //     switch(responses[i]){
    //         case 1:
    //             ++frequency[0];
    //             break;
    //         case 2:
    //             ++frequency[1];
    //             break;
    //         case 3:
    //             ++frequency[2];
    //             break;
    //         case 4:
    //             ++frequency[3];
    //             break;
    //         case 5:
    //             ++frequency[4];
    //             break;
    //         case 6:
    //             ++frequency[5];
    //             break;
    //         case 7:
    //             ++frequency[6];
    //             break;
    //         case 8:
    //             ++frequency[7];
    //             break;
    //         case 9:
    //             ++frequency[8];
    //             break;
    //         case 10:
    //             ++frequency[9];
    //             break;
    //         default:
    //             printf("Invalid input, troll detected!\n");
    //             break;    
    //     }
    // }

    /*
        Solution #2 - using rates as positions of the frequency
    */
    for(int i=0; i<RESPONSES; i++) {
        ++frequency[responses[i] -1];
        // int position_of_rate = responses[i] - 1;
        // frequency[position_of_rate] = frequency[position_of_rate] + 1;
    }

    for(int i=0; i<FREQUENCY; i++) {
        printf("Rate #%d\t", i+1);
        for(int j=0; j<frequency[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(int i=0; i<FREQUENCY; i++) {
        printf("Rate %d, frequency: %d\n", (i+1), frequency[i]);
    }

    return 0;
}