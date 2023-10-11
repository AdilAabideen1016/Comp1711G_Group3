# include <stdio.h>

int main() 
{
    
    int days ;

    printf("Please enter the number of days") ;
    scanf("%d", &days) ;

    int seconds = days * 86400 ;
    int distance = seconds * 299792458 ;
    int KMdistance = distance / 1000 ;

    printf("The distance travelled by light in %d days is %d Kilometres or %d Metres", days, KMdistance, distance);

    return 0 ;
}