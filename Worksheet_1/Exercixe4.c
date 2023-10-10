# include <stdio.h>

int main() 
{
    int radius ;
    int pi = 3.141593 ;

    printf("Please enter the radius of the circle") ;
    scanf("%d", &radius) ;
    int area = pi * (radius * radius) ;
    printf("The area of the circle is %d", area) ;

    return 0 ;
}