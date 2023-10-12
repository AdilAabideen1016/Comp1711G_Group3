#include <stdio.h>

int main()
{
    int a, temp, newTemp ;
    int numArray[5];
    for (a=0 ; a<5 ; a++)
    {
        printf("Please enter a number") ;
        scanf("%d", &numArray[a] );
    }
    temp = numArray[0] ;
    for (a=0 ; a<5 ; a++) {
        newTemp = numArray[a+1] ; 
        numArray[a+1] = temp ; 
        temp = newTemp ;
    }

    for (a=0 ; a<6 ; a++) {
        printf("%d", numArray[a]);
    }

    return 0 ;


}