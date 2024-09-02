// get transpose of a matrix | 2D array 
// https://www.includehelp.com/c-programs/c-program-to-transpose-a-matrix.aspx

#include <stdio.h>
int main() {    
 
    // int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char arr[][3] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int ans[3][3];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            // if (i == j) {
            //     ans[i][j] = arr[i][j];
            //     continue;
            // }
            ans[i][j] = arr[j][i];
            // printf("ans[%d][%d] = %c, arr[%d][%d] = %c \n", i, j, ans[i][j], j, i, arr[j][i]);
        }
            
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%c ", ans[i][j]);
        }
        printf("\n");
    }


    return 0;
}