// * * * *
// * * * *
// * * * *
// * * * *
#include <stdio.h>
void main() {
    int row, col;
    printf("Enter row : ");
    scanf("%d", &row);

    printf("Enter col : ");
    scanf("%d", &col);
    // printf("* * * * \n");
    // printf("* * * * \n");
    // printf("* * * * \n");
    // printf("* * * * \n");

    if (col < 0 || row < 0) {
        printf("Invalid input ");
    } else {
        for (int i = 1; i <= row; i++) { // row 
            // printf("* * * * \n");

            // printf("* ");
            // printf("* ");
            // printf("* ");
            // printf("* ");
            for (int j = 1; j <= col; j++) { // cell | col 
                printf("* ");
            }
            printf("\n");
        }
    }

}