#include <stdio.h>
int main() {    
    
    int arr[] = {1, 2, 3, 4, 5};
    // * int arr[row][col];
    // ! row = num of sub array 
    // ! col = num of elem in sub array 
    // ? method 1 
    // int arr2[4][5] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    
    // ? method 2 
    // int arr2[][5] = {
    //     {11, 22, 49, 54, 25}, 
    //     {111, 32, 13, 14, 45}, 
    //     {1, 12, 43, 41, 35}, 
    //     {31, 12, 61, 24, 15}
    // };

    // ? method 3 
    int arr2[][5] = {11, 22, 49, 54, 25, 111, 32, 13, 14, 45, 1, 12, 43, 41, 35, 31, 12, 61, 24, 15};

    
    // printf("arr2[2][4] = %d \n", arr2[2][4]); // 35
    // printf("arr2[3][3] = %d \n", arr2[3][3]); // 24
    // printf("arr2[1][0] = %d \n", arr2[1][0]); // 3 
    // printf("arr2[1][4] = %d \n", arr2[1][4]); // 45 
    // printf("arr2[4][2] = %d \n", arr2[4][1]); // error 

    // * print all elems | access all elems 
    // pattern 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("arr2[%d][%d] = %d \n", i, j, arr2[i][j]);
        }
        printf("\n");
    }
    
    // print arr[0][0] // 11 
    // print arr[0][1]
    // print arr[0][2]
    // print arr[0][3]
    // print arr[0][4]
    // print "\n"

    // print arr[1][0]
    // print arr[1][1]
    // print arr[1][2]
    // print arr[1][3]
    // print arr[1][4]
    // print "\n"

    // print arr[2][0]
    // print arr[2][1]
    // print arr[2][2]
    // print arr[2][3]
    // print arr[2][4]
    // print "\n"
    
    // print arr[3][0]
    // print arr[3][1]
    // print arr[3][2]
    // print arr[3][3]
    // print arr[3][4]
    // print "\n"
    return 0;
}