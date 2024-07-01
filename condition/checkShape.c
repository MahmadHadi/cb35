// * input -> h, w -> check if given h and w are dimensions of square or rectangle 
// input: h = 10, w = 20


#include <stdio.h>
void main() {
    // if h != w -> rect 
    // if h == w -> sq

    int height, width;
    printf("Enter height : ");
    scanf("%d", &height);

    printf("Enter width : ");
    scanf("%d", &width);

    if (height == width) {
        printf("Square ");
    }
    if (height != width) {
        printf("Rectangle ");
    }
}