#include <stdio.h>

int main(){
    int myAge = 32;

    /*
    *When a variable is created in C, a memory addres is assigned to the variable
    *The memory address is the location of where the variable is stored on the computer
    *to access it, use the reference operator (&)
    *and the result will represent where the variable is stored
    *the memory address is in hexadecimal form
    *&myAge is also called a "pointer"
    *to print pointer values we use the %p format specifier
    *pointers give the ability to manipulate the data in the computer's memory
    *this can reduce the code and improve performance
    *Pointers are one of the things that make C stand out from other programming languages
    */

    printf("%p\n", &myAge);
    //prints the memory address os myAge
    //&myAge is called a pointer

    printf("%d\n", myAge);
    //prints the value of myAge

    int* ptr = &myAge;
    printf("%p\n", ptr);

    /*
    * A pointer variable points to a data type (like int) of the same type,
    *and is created with the * operator
    */

    printf("%d\n", *ptr);
    // To output the value stored in the pointer, we use the "deference" (*) operator

    /*
    * *Sign:
    *used in declaration (int* ptr) creates a pointer variable
    *when not used in declaration, act as a deference operator
    */

}