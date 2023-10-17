#include <stdio.h>

int main() {
    
    int temperature ;
    printf("Please enter the temperature in celsius") ;
    scanf("%d", &temperature) ;

    if ( -10 < temperature < 40) {
        printf("The temperature is bettween -10 and 40") ;
    } else {
        printf("The temperature is outside that range") ;
    }

}