# include <stdio.h>

int main() 
{
    int factorial ;
    int i ;
    int result ;
    printf("Please enter the Number you would like to get a factorial of") ;
    scanf("%d", &factorial);

    for (i = 1; i <= factorial ; ++i) ;
    {
        result *= i;
    }
     printf("The result is %d", result);

     return 0 ;
}