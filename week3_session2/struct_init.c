#include <stdio.h>

struct human {
    char name [20] ;
    unsigned age ; 
    char subject [20] ;
    char home [20];
} ;

int main() 
{
    struct human adil = {"Adil Aabideen", 18, "CompSci", "Manchester"} ;
    printf("Your Name : %s\n", adil.name);
    printf("Your age : %d\n", adil.age) ;
    printf("Your Subject : %s\n", adil.subject) ;
    printf("Your home %s\n", adil.home) ;
    
    return 0 ;
}