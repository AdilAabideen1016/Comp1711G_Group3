#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b ;
    int maximum = 0 ;
    int found = 0 ;
    int numArray[4];
    bool flag = false ;
    for (a=0 ; a<5 ; a++)
    {
        printf("Please enter a number") ;
        scanf("%d", &numArray[a] );
    }

    for (a=0 ; a<5 ; a++)
    {
        for( b=0; b<5 ; b++ )
        {
            if (numArray[a] == numArray[b]) {
                found = found + 1 ;
                if (found >=2 && flag == false) {
                    printf("The element %d has been found multiple times \n", numArray[a]);
                    flag = true ;
                }
            }
        }
        found = 0 ;
    }

    

    return 0 ;


}