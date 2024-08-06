//       a 
//     a b a 
//   a b c b a 
// a b c d c b a 


#include <stdio.h>
void main() {
    int height = 5;
    for (int i = 1; i <= height; i++) {
        int count = 0;
        for (int j = height; j > i; j--) {
            // printf("# ");
            printf("  ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("%c ", count + 97);
            if (k < i - 1) {
                count++;
            } else {
                count--;
            }
        }
        printf("\n");
    }
}
