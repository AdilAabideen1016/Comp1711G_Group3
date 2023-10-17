#include <stdio.h>

int main() 
{
    int digit ;
    printf("Please enter a digit ");
    scanf("%d", &digit) ;

    if ((digit % 4) == 0) {

        if ((digit % 5) == 0) {
            printf("The number you have entered is divisible by 4 and 5 ") ;
        } else {
            printf("The number you have entered is divisible by 4 but not 5 ");
        }
    } else if ((digit % 5) == 0) {
        printf("The number you have entered is divisible by 5 but not 4"); 
    } else {
        printf("The number you have entered is not divisible by 4 or 5") ;
    }
}