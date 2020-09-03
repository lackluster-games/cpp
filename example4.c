/*  Example 4 from my exploration of the C preprocessor.
 *  These examples have been tested on Manjaro 20.1 using:
 *      gcc:    10.2.0
 *      clang:  10.0.1
 * Blog post covering code can be found: 
 * All example code is hosted on github at: 
 *
 * This example shows how to use conditional statements with the preprocessor.
 * try the file as is, then try commentting out '#undef X' to see the diffrence. 
 */ 

#include <stdio.h>      //look for the file 'stdio.h' in system directories.

#define X            //here we define a token 'X'. try commenting out to see how it changes the conditional code below.
#define PI 2        //here we define the incorrect value for PI


#undef X            //undefine 'X' so it is no longer a macro

//here we conditionally define 'Y'
//if X is defined then Y is "Hello,World!"
//try commenting out '#undef X' to see how Y changes
#ifdef X
    #define Y "Hello,World!"
#else                            //if X is not defined
    #define Y "Goodbye,World!"
#endif


//we can also check to se if something isnt defined
//here we check to see if X isnt defined.
//you can comment out '#undef X' to change 'Z'
#ifndef X
    #define Z "X isnt defined!"
#else                           //if X is defined
    #define Z "X is defined!"
#endif

//we can also do else if with the preprocessor.
//you are allowed to use as many 'elif' as you like.
#ifdef A                              //A isnt defined, so this check fails
    #define B "Hello Ed boys!"
#elif defined X                      //if X is defined
    #define B "Look,Jawbreakers!"
#else                               //if neither X nor A are defined
    #define B "Buttered Toast!"
#endif

//we can also check the value of a defined macro
//here we check PI. since we defined it as 2 this first test passes.
#if PI == 2
    #define C "That isnt the correct value!"
#else
    #define C "You did something else!"
#endif


int main(void) {
    printf("Y is: %s\n",Y);
    printf("Z is: %s\n",Z);
    printf("B is: %s\n",B);
    printf("C is: %s\n",C);
    return 0;
}
