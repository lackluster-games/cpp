/*  Example 5 from my exploration of the C preprocessor.
 *  These examples have been tested on Manjaro 20.1 using:
 *      gcc:    10.2.0
 *      clang:  10.0.1
 * Blog post covering code can be found: https://lacklustergames.blogspot.com/2020/09/quick-look-at-c-preprocessor.html   
 * All example code is hosted on github at: https://github.com/lackluster-games/cpp 
 *
 * This example shows the use of some predefined macros.
 * not every single one of these macros may be defined for every single C compiler.
 *
 *Showing the predefined macros '__FILE__','__LINE__','__func__','__DATE__','__TIME__','__COUNTER__'
 */ 

#include <stdio.h>      //look for the file 'stdio.h' in system directories.


int main(void) {

    //counter starts at zero and increases by 1 each time it is called.
    printf("counter is: %d\n",__COUNTER__);     //counter is zero
    printf("counter is now: %d\n",__COUNTER__); //counter is 1
    __COUNTER__;    //increase counter by 1. counter is 2
    __COUNTER__;    //increase counter by 1. counter is 3

    //when called in printf here, counter should be 4
    printf("counter is currently: %d\n",__COUNTER__);

    //get the name of the file with '__FILE__'
    printf("file is: %s\n",__FILE__);

    //get the current line in the file with '__LINE__'
    printf("this stement is on line: %d\n",__LINE__);

    //printing out error message using the macros.
    fprintf(stderr,"There is an error in: %s on line: %d\n",__FILE__,__LINE__);
    fprintf(stderr,"there is an error in function: %s\n",__func__);

    //gets the current date with '__DATE__'
    printf("current date is: %s\n",__DATE__);

    //get the time at which the C preprocessor started running using '__TIME__'
    printf("the preprocessor started running at: https://github.com/lackluster-games/cpp %s\n",__TIME__);

    return 0;
}
