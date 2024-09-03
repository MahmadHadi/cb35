#include <stdio.h>
#include<string.h>
int main() {    
 
    // char name[100];
    // printf("name[1] = %c", name[1]);

    // for (int i = 0; i < sizeof(name); i++) {
    //     printf("%c", name[i]);
    // }

    char name[100];
    printf("Enter your name : ");
    gets(name); // * get | input name 
    puts(name); // * print name 

    printf("name = %s \n", name);

    printf("size of name = %d \n", sizeof(name));

    char name2[100];
    strcpy(name2, name);
    printf("name2 = ");
    puts(name2);

    printf("length of name = %d \n", strlen(name));
    return 0;
}

// java -> pure oop  -> BE 

// c++ -> semi oop -> game dev + compiler 

// count << "Hello world " << endl;

// System.out.println("Hello world ");