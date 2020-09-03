/*  Example 7 from my exploration of the C preprocessor.
 *  These examples have been tested on Manjaro 20.1 using:
 *      gcc:    10.2.0
 *      clang:  10.0.1
 * Blog post covering code can be found: https://lacklustergames.blogspot.com/2020/09/quick-look-at-c-preprocessor.html   
 * All example code is hosted on github at: https://github.com/lackluster-games/cpp 
 *
 * This example uses variadic macro as a way to improve upon our DEBUG example.
 */ 


#include <stdio.h>      //look for the file 'stdio.h' in system directories.
#define DEBUG          //define this to turn on our debug messages.

//if we want debug messages we can use fprintf. 
//the '...' indicated the macro can take a variable number of arguments.
//the '__VA_ARGS__' is where the arguments will be inserted, in order, when preprocessor expands macro.
#ifdef DEBUG
    #define DEBUG_MSSG(...) fprintf(stderr,__VA_ARGS__);
#else  //if DEBUG not defined then leave an empty line.
    #define DEBUG_MSSG(...)
#endif


int addStuff(int a, int b) {
    DEBUG_MSSG("a is %d b is %d\n",a,b)
    DEBUG_MSSG("a + b is %d\n",a + b)
    return a + b;
}

int main(void) {
    //we can use our old friends the predefined macros. 
    DEBUG_MSSG("error in function: %s() on line: %d\n",__func__,__LINE__)
    int result = addStuff(5,6);
    return 0;
}
