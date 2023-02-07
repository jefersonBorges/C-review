#include <stdio.h>

int main(){
    int myNum = 5;
    //int stores integers without decimals

    float myFloatNum = 5.99;
    //float stores floating point numbers

    char myLetter = 'D';
    //char stores single characters, surrounded by SINGLE QUOTES

    printf("%d\n", myNum);
    /*
    *"%d" is a format specifier for double or int characters
    *format specifiers work with the printf() function
    */

    printf("%f\n", myFloatNum);
    //"%f" for float

    printf("%c\n", myLetter);
    //"%c" for char

    return 0;

    /*
    *Variable names must:
    *be identified with unique numbers, called identifiers
    *be short or descriptive names
    *
    * Names
    * contain letters, digits and underscores
    * beguin with letters or underscore
    * case sensitive
    * CANNOT contain white spaces or special characters
    * CANNOT use reserved words such as int
    */
}