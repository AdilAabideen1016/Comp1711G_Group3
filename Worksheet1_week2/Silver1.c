#include <stdio.h>

int main() 
{
    int mark ;
    printf("Please enter your students mark ");
    scanf("%d", &mark);

    if (mark > 70) {
        printf("You have achieved a distinction") ;
    } else if (mark > 50 ){
        printf("You have passed ") ;

    } else {
        printf("You have failed") ;
    }
}