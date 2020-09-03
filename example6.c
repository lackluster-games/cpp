/*  Example 6 from my exploration of the C preprocessor.
 *  These examples have been tested on Manjaro 20.1 using:
 *      gcc:    10.2.0
 *      clang:  10.0.1
 * Blog post covering code can be found: https://lacklustergames.blogspot.com/2020/09/quick-look-at-c-preprocessor.html   
 * All example code is hosted on github at: https://github.com/lackluster-games/cpp 
 *
 * In this example we explore using the preprocessor to turn features on/off.
 * We use a simple example of turning debug/error messaging on/off
 */ 


#include <stdio.h>      //look for the file 'stdio.h' in system directories.
#define DEBUG 1       //turns debug features on/off.
#define DEBUG_ALT     //alternative method for turning features on/off


//simple function to add two integers together.
//when 'DEBUG' is defined as 1 then debug messages are printed to STDERR
//you can turn this off by defining 'DEBUG' as any other number, typically 0 is used. 
int addStuff(int a, int b) {
#if DEBUG == 1
    fprintf(stderr,"a is: %d b is: %d\n",a,b);
    fprintf(stderr,"a + b is: %d\n", a + b);
#endif
    return a + b;
}

int main(void) {
    int result = addStuff(5,6);
    //if debug is defined then print debug message to STDERR
    //can either delete '#define DEBUG_ALT' or use '#undef DEBUG_ALT' to turn this off
#ifdef DEBUG_ALT
    fprintf(stderr,"result is %d\n",result);
#endif

    //you can also turn off sections of code using '#if 0' since 0 is always evalutaed as false.
#if 0
    //code you dont want to run is inside this block
    printf("this code wont run\n");
    printf("nor will this text print\n");
    int a = 5;       //this variable never gets created
#endif 
    return 0;
}
