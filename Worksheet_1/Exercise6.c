# include <stdio.h>

int main() 
{
    int num_1 ;

    printf("Please enter the integer") ;
    scanf("%d", &num_1) ;

    int result = num_1 %2 ;
    if (result == 0 ) {
        printf("The Number is even") ;
    } else {
        printf("The Number is Odd") ;
    } ;

    return 0 ;
}