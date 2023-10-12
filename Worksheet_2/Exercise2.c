#include <stdio.h>

int main() 
{
    int numArray[4] ;
    int a, num ;
    int total = 0 ;
    for (a=0 ; a<5 ; a++)
    {
        printf("Please enter a number") ;
        scanf("%d", &numArray[a] );
    }
    
    num = numArray[0] ;
    numArray[0] = numArray[4] ;
    numArray[4] = num ;
    num = numArray[1] ;
    numArray[1] = numArray[3] ;
    numArray[3] = num ;


    for (a=0 ; a < 5 ; a++) 
    {
        printf("%d", numArray[a]);
    }

    return 0 ;

}