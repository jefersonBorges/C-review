#include <stdio.h>

int main(){

    int a = 21;
    int c;

    c = a;
    printf("Line 1- = Operator, value of c = %d\n\n",c);

    c += a;
    printf("Line 2- += Operator, value of c = %d\n\n",c);

    c -= a;
    printf("Line 3- -= Operator, value of c = %d\n\n",c);

    c *= a;
    printf("Line 4- *= Operator, value of c = %d\n\n",c);

    c /= a;
    printf("Line 5- += Operator, value of c = %d\n\n",c);

    c = 200;
    c %= a;
    printf("Line 6- %%= Operator, value of c = %d\n\n",c);

    c=6;
    c <<= 2;
    printf("Line 7- <<= Operator, value of c = %d\n\n",c);

    c >>= 2;
    printf("Line 8- >>= Operator, value of c = %d\n\n",c);

    c &= 2;
    printf("Line 9- &= Operator, value of c = %d\n\n",c);

    c ^= 2;
    printf("Line 10- ^= Operator, value of c = %d\n\n",c);

    c = 4;
    c |= 2;
    printf("Line 11- |= Operator, value of c = %d\n\n",c);
    
    return 0;
}