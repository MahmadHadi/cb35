// ans = n! / r! * (n - r)!

#include <stdio.h>
int getFact(int num) {
    int ans = 1;
    for (int i = 1; i <= num; i++) {
        ans *= i;
    }
    return ans;
}
int main() {
    int n = 5, r = 2;

    int nCr = getFact(n) / (getFact(r) * getFact(n - r));

    printf("%d C %d = %d ", n, r, nCr);

    return 0;
}

// 5! / 2! * 3! 
// 120 / 12 = 10 