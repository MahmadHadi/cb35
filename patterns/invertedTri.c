//     *
//   * *
// * * *

//       0 
//     1 0 
//   1 0 1
// 0 1 0 1 

#include <stdio.h>
void main() {
    int height = 5;
    // printf("Enter height : ");
    // scanf("%d", &height);

    for (int i = 1; i <= height; i++) {
        for (int j = height - 1; j >= i; j--) { // # 
            // printf("# ");
            printf("  ");
        }
        
        for (int k = 1; k <= i; k++) {
            printf("* ");
        }

        printf("\n");
    }
}


// height = 3 
// # -> 2 -> height - 1 
// * -> 3 

// # # * 
// # * *
// * * *

// # # 
// # 

// * 
// * * 
// * * * 

// 1loop -> "\n"
// 2loop -> "# "
// 3loop -> "* "


// print "# " i = 1 -> i <= height  
// print "# " {# } j = height - 1 -> j >= i
// print "* " {* } k = 1 -> k <= i 

// print "\n"

// pirnt "# "
// pirnt "* "
// pirnt "* "

// print "\n"
// print "* "
// print "* "
// print "* "