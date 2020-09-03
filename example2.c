/*  Example 2 from my exploration of the C preprocessor.
 *  These examples have been tested on Manjaro 20.1 using:
 *      gcc:    10.2.0
 *      clang:  10.0.1
 * Blog post covering code can be found: https://lacklustergames.blogspot.com/2020/09/quick-look-at-c-preprocessor.html   
 * All example code is hosted on github at: https://github.com/lackluster-games/cpp 
 *
 * This example further expands upon example 1.
 * here we define a function like macro called 'SQR'
 * this function can then be used to get the square of a number.
 */ 

#include <stdio.h>      //look for the file 'stdio.h' in system directories.

#define PI 3.14159     //every time that you use 'PI' it will be replaced with '3.14159'
#define SQR(x)  x*x    //define macro which squares a number which you send to it.

int main(void) {
    printf("2^2 is: %d\n",SQR(2));
    float result = SQR(3.14159);         //can assign the results to a variable
    printf("result is: %f\n",result);
    printf("square of pi is: %f\n",SQR(PI));   //can use PI in a macro. macros can be called with other macros. they will be be expanded as normal. 
    return 0;
}
