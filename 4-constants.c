#include <stdio.h>

int main(){
    const int MINUTESPERHOUR = 60;
    const float PI = 3.14;
    /*
    *Constants are unchangeable and read-only after their declaration
    *always declare constants with their values assigned
    *Uppercase is a good practice for const variables
    */

    printf("%d\n", MINUTESPERHOUR);
    printf("%f\n", PI);

    return 0;
}