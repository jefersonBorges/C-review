#include <stdio.h>

int main(){
    char greetings[] = "Hello World!";
    /*
    *C does not have a String type
    *To make a string, you can use the char type to create an array of characters
    *use DOUBLE quotes to assign the string
    */

    printf("%s\t", greetings);

   /*
   *To output the string, use the printf() function
   *with the %s format specifier
   */

    printf("%c\t", greetings[0]);
    /*
    *since a string is an array, you can access its characters by their indexes
    *for that, use the format specifier %c with the function printf();
    */

   printf("\n\n");

    char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    /*
    *You can also crate a "string literal"
    *for that method, at the end of the string you mus use the "null terminating character" \0
    *it tells C that is the end of the string
    */
    printf("%s\t", greetings2);

}