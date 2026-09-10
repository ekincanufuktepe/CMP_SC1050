#include<stdio.h>

int main() {

    int input = 0;
    printf("Input: ");
    scanf("%d", &input);

    int count = 0;

    while(count != input) { // this is for the rows
        int cols = count + 1;

        /* Alternative #1 */
        while(cols--) { // this is for the columns
            printf("%c", count%2 == 0 ? '+' : '-');
        }

        /* Alternative #2 */
        // while(cols != 0) { // this is for the columns
        //     printf("%c", count%2 == 0 ? '+' : '-');
        //     cols = cols - 1;
        // }
        printf("\n");
        count++;
    }

    return 0;
}