// a b c d 
// e f g h 
// i j k l 
// m n o p 

#include <stdio.h>
void main() {
    int ch = 1;
    // char ch = 'a';
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            printf("%c ", ch + 96); 
            // printf("%c ", ch); 
            ch++;
        }
        printf("\n");
    }
}