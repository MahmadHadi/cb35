    #include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {    
    typedef union Student {
        char name[20]; // str // 20
        int age; // int // 4
        bool isPass; // bool // 1 
        float marks; // float // 4 
        char grade; // char // 1 
    } student ; // size = 20 

    student s1;
    char name[] = "Hadi Nayani";
    strcpy(s1.name, name);
    // s1.age = 21;
    // s1.grade = 'A';
    // s1.marks = 4.4;
    // s1.isPass = true;

    printf("s1.name = %s \n", s1.name);
    // printf("s1.grade = %c \n", s1.grade);
    // printf("s1.marks = %f \n", s1.marks);
    // printf("s1.age = %d \n", s1.age);
    // printf("s1.isPass = %d \n", s1.isPass);

    printf("\n");
    
    // struct Student s2 = {"Hadi ", 23, true, 3, 'B'};
    // printf("s2.name = %s \n", s2.name);
    // printf("s2.grade = %c \n", s2.grade);
    // printf("s2.marks = %f \n", s2.marks);
    // printf("s2.age = %d \n", s2.age);
    // printf("s2.isPass = %d \n", s2.isPass);
    return 0;
}