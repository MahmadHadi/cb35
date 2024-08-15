#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
int main() { 

    // printf("sqrt(36) = %f \n", sqrt(36));

    // printf("pow(2, 5) = %f \n", pow(2, 5)); 
    // printf("log10(10) = %f \n", log10(10)); 
    // printf("sin(360) = %f \n", sin(360)); 
    // printf("cos(360) = %f \n", cos(360)); 
    // printf("tan(360) = %f \n", tan(360)); 

    // printf("%c ", tolower('E'));
    // printf("%c ", toupper('e'));

    // printf("%f ", floor(3.14));

    time_t seconds;
     
    seconds = time(NULL);
    printf("Seconds since January 1, 1970 = %ld\n", seconds);
     
    return 0;
}