#include <stdio.h>

int main()
{
    int a ;
    int maximum = 0 ;
    int numArray[4];
    for (a=0 ; a<5 ; a++)
    {
        printf("Please enter a number") ;
        scanf("%d", &numArray[a] );
    }

    for (a=0 ; a<5 ; a++)
    {
        if (numArray[a] > maximum) {
            maximum = numArray[a] ;
        }
    }

    printf("The maximum  number in this array is %d", maximum);

    return 0 ;


}