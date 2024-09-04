// name = "ssccm"
#include <stdio.h>
#include <string.h>
int main() {    
 
    char name[] = "TheEasyLearn";
      // *      s 
      // *     s s 
      // *    s s c 
      // *   s s c c  
      // *  s s c c m 
    int height = strlen(name);

    for (int i = 1; i <= height; i++) {
        int index = 0;
        for (int j = height - 1; j >= i; j--) {
            printf(" ");
            // printf(" ");
        } 
        for (int j = 1; j <= i; j++) {
            // printf("* ");
            printf("%c ", name[index]);
            index++;
        }
        printf("\n");
    }
    return 0;
}