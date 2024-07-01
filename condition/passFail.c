// input -> marks -> marks >= 60 -> pass 
//                     else -> fail

#include <stdio.h>
void main() {
    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks >= 60) {
        printf("Pass ");
    } else {
        printf("Fail ");
    }
}