#include <stdio.h>
#include <ctype.h>

void main() {
    char ch;
    printf("Enter a char : ");
    scanf("%c", &ch);

    // * convert into lowercase 
    ch = tolower(ch);
    printf("Lowercase : %c\n", ch);
    
    if (ch == 'a') {
        printf("The char is vowel\n");
    } else if (ch == 'e') {
        printf("The char is vowel\n");
    } else if (ch == 'i') {
        printf("The char is vowel\n");
    } else if (ch == 'o') {
        printf("The char is vowel\n");
    } else if (ch == 'u') {
        printf("The char is vowel\n");
    } else {
        printf("The char is consonant\n");
    }
}

// input -> char 
// if () * 10 

