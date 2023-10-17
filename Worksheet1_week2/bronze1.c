#include <stdio.h>

int main() 
{
    int digit ;
    printf("Please enter a Number \n");
    scanf("%d", &digit);

    if (digit==0) {
        printf("The digit you ahve entered is 0");
    } else if ( (digit % 2) > 0 ) {
        printf("The digit you ahve entered is odd");
    } else {
        printf("The digit you ahve entered is even");
    }
}