#include <stdio.h>

int main()
{

    int length ;
    int width ;

    printf("Please enter the length of the rectangle") ;
    scanf("%d", &length) ;
    printf("PLease enter the width fo the rectanlge") ;
    scanf("%d", &width) ;
    int area = length * width ;
    printf("The area is %d ", area);
    
    return 0 ;
}