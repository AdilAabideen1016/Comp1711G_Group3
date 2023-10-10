# include <stdio.h>

int main() 
{
    int swap ;
    int num_1 ;
    int num_2 ;

    printf("Please enter the first Number") ;
    scanf("%d", &num_1) ;
    printf("Please enter the Second Number") ;
    scanf("%d", &num_2) ;
    printf("Number 1 is %d and Number 2 is %d before we swap", num_1, num_2) ;
    swap = num_1 ;
    num_1 = num_2 ;
    num_2 = swap ;
    printf("Number 1 is %d and Number 2 is %d after we swap", num_1, num_2) ;

    return 0 ;

}