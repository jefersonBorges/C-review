#include <stdio.h>

int main(){
    printf("Hello World! \n");
    /*
    *\n is called escape sequence
    *\n inserts a new line
    */

    printf("I am learning C.");

    printf("Hello World! \n\n");
    // \n\n creates a blank line

    printf("I am learning C.");
    printf("\n\n");

    printf("Hello World!\t");
    // \t creates a horizontal tab
    printf("I am learning C.");
    printf("\n\n");

    printf("Hello World!\\");
    // \\ creates a backslash caracter
    printf("I am learning C.");
    printf("\n\n");

    printf("Hello World!\"");
    // \" inserts a double quote character
    printf("I am learning C.");
    printf("\n\n");

    return 0;
}