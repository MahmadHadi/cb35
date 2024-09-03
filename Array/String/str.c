#include <stdio.h>
int main() {    
 
    char str[] = {'h', 'a', 'd', 'i'};
    int size = sizeof(str);

    for (int i = 0; i < size; i++) {
        printf("%c", str[i]);
    }
    return 0;
}