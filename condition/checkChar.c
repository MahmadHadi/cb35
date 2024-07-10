// input => char -> check if given char is smallcase, uppercase or number 

#include <stdio.h>
void main() {
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    // 'a' -> 'z' -> 97 -> 122 
    // 'A' -> 'Z' -> 65 -> 90
    // '0' -> '9' -> 48 -> 57

    if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } 
    else if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("Number\n");
    } 
    else {
        printf("Invalid input ");
    }
}