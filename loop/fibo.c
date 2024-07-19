// * 1 1 2 3 5 8 13 21 ... 
#include <stdio.h>
void main() {
    // 1 + 1 = 2
    // 1 + 2 = 3
    // 2 + 3 = 5 
    // 3 + 5 = 8

    int n;
    printf("Enter the number of terms : ");
    scanf("%d", &n);

    int first;
    int sec;
    
    printf("Enter first term : ");
    scanf("%d", &first);
    
    printf("Enter sec term : ");
    scanf("%d", &sec);
    
    int ans;
    if (n == 1) {
        printf("%d ", first); // 1 
    } else if (n == 2)  {
        printf("%d ", first); // 1 
        printf("%d ", sec); // 1
    } else {
        printf("%d ", first); // 1 
        printf("%d ", sec); // 1
        
        for (int i = 1; i <= n - 2; i++) {
            ans = first + sec; 
            printf("%d ", ans); 
            first = sec; 
            sec = ans; 
        }
    }
}
// ans = first + sec; // 1 + 1 = 2 
// printf("%d ", ans); // 2 
// first = sec; // first = 1
// sec = ans; // sec = 2 
// ans = first + sec; // 1 + 2 = 3 
// printf("%d ", ans); // 3
// first = sec; // first = 2 
// sec = ans; // sec = 3
// ans = first + sec; // 2 + 3 = 5 
// printf("%d ", ans); // 5 



// 3 2 5 7 12 19 31 ... 

// 5 11 16 ...

