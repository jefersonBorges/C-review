#include <stdio.h>

int main(){
    int myNumbers[] = {25, 50, 75, 100};
    printf("%d", myNumbers[0]);

    printf("\n\n");

    myNumbers[0] = 33;
    printf("%d", myNumbers[0]);

    printf("\n\n");

    int myNumbers2[4];

    myNumbers2[0] = 25;
    myNumbers2[1] = 50;
    myNumbers2[2] = 75;
    myNumbers2[3] = 100;

    for(int i = 0; i < 4; i++){
        printf("%d\t", myNumbers2[i]);
    }

}