#include<stdio.h>

/*

I already did this. I am okay moving the next one.

*/

void hello_world(){
    printf("Hello World \n");

}

///
//In C, directives are used to provide instructions to the preprocessor. Always starts with # 
// there are many types: #include= like library 
//#define = like constume library for variables. 
//#Conditional Compilation Directives: These directives allow you to control which parts of your code are compiled based on certain conditions.
//   This is helpful for creating platform-specific code or including debug statements only during development.
//      #ifdef, #ifndef, #if, #elif, #else, #endif: 


//
void dweigh(int  height, int length, int width,  int volume, int weight){

    volume = height * width * length;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n1", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

}
int main(void){

    hello_world();
   
    return 0;
}