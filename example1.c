/*  Example 1 from my exploration of the C preprocessor.
 *  These examples have been tested on Manjaro 20.1 using:
 *      gcc:    10.2.0
 *      clang:  10.0.1
 * Blog post covering code can be found: https://lacklustergames.blogspot.com/2020/09/quick-look-at-c-preprocessor.html   
 * All example code is hosted on github at: https://github.com/lackluster-games/cpp 
 *
 * this example is the introduction to using macros.
 * we create a macro for 'PI' and one for 'str'
 * we then use these macros in main to illustrate the basic use of them.
 */ 


#include <stdio.h>      //look for the file 'stdio.h' in system directories.

#define PI 3.14159                         //every time that you use 'PI' it will be replaced with '3.14159'
#define str "Hello,World! How are you?"   //also works for strings.


int main(void) {
    printf("PI is %f\n",PI);
    float pi = PI;             //you can assign it to a variable
    printf("pi is %f\n",pi);
    printf("str is: %s\n",str);
    return 0;
}
