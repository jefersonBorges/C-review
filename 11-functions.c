#include <stdio.h>

void myName(char name[]);
void myAge(int age);
void myNameAge(char name[], int age);
int sum(int x, int y);
//Declararing the functions first

int main(){
    myName("Jeferson");
    myAge(32);
    myNameAge("Jeferson", 32);

    int result = sum(2,3);
    printf("The result is %d.\n", result);

    printf("The result is %d.\n", sum(2,3));

}
//Using the main method

void myName(char name[]){
    printf("Hello %s\n", name);
}
void myAge(int age){
    printf("Your age is %d\n", age);
}
void myNameAge(char name[], int age){
    printf("Hello %s! You are %d years old.\n", name, age);
}
int sum(int x, int y){
    return x+y;
}
//Defining the functions