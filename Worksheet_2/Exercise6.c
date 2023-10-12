#include <stdio.h> 

int main() 
{
    int a, x ;
    int Array_1[2];
    int Array_2[5];
    for (x=0 ; x < 3 ; x++)
    {
        printf("PLease enter a number");
        scanf("%d", &Array_1[x]) ;
    }
    for (x=0 ; x < 3 ; x++)
    {
        printf("PLease enter a number");
        scanf("%d", &Array_2[x]) ;
    }

    for (a=0 ; a<3 ; a++)
    {
        Array_2[a + 3] = Array_1[a] ;
    }
    for (a=0 ; a<6 ; a++)
    {
        printf("%d", Array_2[a]) ;
    }

    return 0 ;
    
}