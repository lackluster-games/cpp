/*  Example 3 from my exploration of the C preprocessor.
 *  These examples have been tested on Manjaro 20.1 using:
 *      gcc:    10.2.0
 *      clang:  10.0.1
 * Blog post covering code can be found: https://lacklustergames.blogspot.com/2020/09/quick-look-at-c-preprocessor.html   
 * All example code is hosted on github at: https://github.com/lackluster-games/cpp 
 *
 * Example 3 of using the C preprocessor.
 * This example shows how you can defin macros in another file and include those in this file.
 */ 

#include <stdio.h>      //look for the file 'stdio.h' in system directories.

#include "macros.h"     //look for file 'macros.h' in same directory as 'example3.c'


int main(void) {
    printf("PI is: %f\n",PI);          //'PI' is defined in 'macros.h' but we cna use it here because of the above 'include'
    printf("SQR(2) is: %d\n",SQR(2));
    return 0;
}
