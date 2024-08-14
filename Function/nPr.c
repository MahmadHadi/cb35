// n = 4
// r = 2 
// 4! / 2!

// ans = n! / (n - r)!
// ans = 4! / (4 - 2)! -> 4! / 2! 

#include <stdio.h>

int getFact(int num) {
    int ans = 1;
    for (int i = 1; i <= num; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    int n, r;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Enter value of r : ");
    scanf("%d", &r);

    if (n < r) {
        printf("Invalid input ");
    } else {
        int nPr = getFact(n) / getFact(n - r);
        // printf("npr = %d ", nPr);
        // printf("%dP%d = %d ", n, r, getFact(n) / getFact(n - r));
        printf("%d P %d = %d ", n, r, nPr);
    }
}


// n = 3, r = 5 

// n - r -> 3 - 5 -> -2