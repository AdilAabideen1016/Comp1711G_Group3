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
    for (a=0 ; a<5 ; a++)
    {
        total = total + numArray[a] ;
    }
    printf("the total is %d" ,total);

    return 0;

}