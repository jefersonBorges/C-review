#include <stdio.h>

int main(){
    int myNum;
    //this variable will store the number we get from the user

    printf("Type a number:\n");
    //ask the user to type a number

    scanf("%d", &myNum);
    /*
    *Get and save the number the user types
    *the function scanf() takes two arguments
    *the format specifier of the variable (%d in this case)
    *and the reference operator(&myNum) 
    *which stores the memory address of the variable
    */

    printf("Your number is: %d\n\n", myNum);
    //output the number the user typed

    char firtsName[30];
    /*
    *To create a input of a string, we must define its size
    */

    printf("Enter your first name:\n");

    scanf("%s", firtsName);
    // you don't have to use the reference operator &

    printf("Hello %s ! Your number is %d.", firtsName, myNum);

}