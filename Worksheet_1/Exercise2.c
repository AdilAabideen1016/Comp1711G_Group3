# include <stdio.h>

int main() 
{
    int num_1 ;
    int num_2 ;
    
    printf("Please enter the first number") ;
    scanf("%d", &num_1) ;
    printf("Please enter the second Number") ;
    scanf("%d", &num_2) ;
    int result = num_1 + num_2 ;
    printf("The result is %d",result);

    return 0 ;
    
}