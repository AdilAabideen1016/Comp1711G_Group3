# include <stdio.h>

int main() 
{
    int temp ;

    printf("Please enter the temperature in farrenheit") ;
    scanf("%d",&temp) ;
    int celcius = (temp - 32) / 1.8 ;

    printf("The temperature in Farrenheit was %d and now in Celcius it is %d", temp, celcius) ;

    return 0 ;
}