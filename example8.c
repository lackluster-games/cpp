/*  Example 1 from my exploration of the C preprocessor.
 *  These examples have been tested on Manjaro 20.1 using:
 *      gcc:    10.2.0
 *      clang:  10.0.1
 * Blog post covering code can be found: 
 * All example code is hosted on github at: 
 *
 * this shows an example of using the C preprocessor by itself as a text macro processor
 * this example uses the define satment to make html tags.
 * when run through the c preprocesor using the '-P' flag it will generate an html file. 
*/


#define HTML(str) <HTML> str </HTML>

//since we want to be able to use commas in our paragraphs, we need to do something.
//normally commas in arguments are treated as seperate arguments to the macro.
//using Varadict arguments is an easy way around that.
//but this illustrates one of the weaknesses of using the CPP as a standalone macro processor.
#define PARA(...) <p> __VA_ARGS__ </p>   
#define SEC(str) <section> str </section>
#define H2(str)  <h2> str </h2>


HTML(
    SEC( 
        H2(Testing)
        PARA(hello world,how are you?<br >)
        PARA(I am fine, thanks for asking.)
    )
)
